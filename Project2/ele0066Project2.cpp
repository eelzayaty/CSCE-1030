/*
*   Author: Ethan El-Zayaty
*   Date: 10/21/2022
*   Instructor: Dr Shrestha
*   Description: Code to run a simple matching game, using 2d arrays and functions
*/

#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <unistd.h>

using namespace std;

const int ROWS = 10;
const int COLS = 10;

/*
*   Description: display a 2d array of ints
*   Arguements: 2d array, length
*   Return: void
*/
void display(int arr[][COLS], int rows, int cols) {
    cout << endl;
    //parse through all values of 2d array
    for(int x = 0; x < rows; x++) {
        for(int y = 0; y < cols; y++) {
            cout << arr[x][y] << "   ";
        }
        cout << endl;
    }
    cout << endl;
}

/*
*   Description: check to see if the entered coordinates have been revealed already
*   Arguements: boolean array, row coordinate, col coordinate
*   Return: true if already revealed
*/
bool checkRepeat(bool arr[][COLS], int row, int col) {
    //check the boolean array at the given coords
    if(arr[row][col]) {
        return true;
    }
    else {
        return false;
    }
}

/*
*   Description: initialize two 2d arrays
*   Arguements: array, int numRows, int numCols, and a default value
*   Return: void
*/
void initialize(int arr[][COLS], int rows, int cols, int x =1) {
    //initialize disp array
    if(x == 1) {
        for(int x = 0; x < rows; x++) {
            for(int y = 0; y < cols; y++) {
                arr[x][y] = -1;
            }
        }
    }
    //initialize numArray with rand ints
    else {
        srand(time(NULL));
        for(int x = 0; x < rows; x++) {
            for(int y = 0; y < cols; y++) {
                arr[x][y] = rand() % 19 + 1;
            }
        }
    }
}

/*
*   Description: check if email format is correct
*   Arguements: user entered email
*   Return: false if email is in incorrect formatting
*/
bool isWrongFormat(string email) {
    if(email.find('@') != string::npos) { //make sure it has one @
        int atIndex = email.find('@'); //store value
        //check if dot exists and is in a valid position
        if(email.find('.') != string::npos) {
            int periodIndex = email.find('.'); //store index
            if ((periodIndex - atIndex) <= 2)
            {
                //cout << "@ and . are too close" << endl; //for troubleshooting
                return true;
            }
            email.erase(periodIndex);
        }
        else {
            //cout << "Has no . " << endl; // for troubleshooting
            return true;
        }
        email.erase(atIndex); //remove the @
        for(int x = 0; x < email.length(); x++) { //make sure it is only characters
            if(isalpha(email.at(x)) || isdigit(email.at(x))) {
                //none
            }
            else{
                //cout << "Is not all alphanumeric" << endl; // for troubleshooting
                return true;
            }
        }
    }
    else{
        //cout << "No @" << endl; // for troubleshooting
        return true;
    }
    //return false;
}

//main
int main() {
    
    int numArray[ROWS][COLS];
    int dispArray[ROWS][COLS];

    //ask for email address
    string email;
    do
    {
        cout << "Enter your email: ";
        getline(cin, email);
    } while (isWrongFormat(email));

    
    //array size checker/enter
    int numRows;
    int numCols;
    bool goodSize;
    do{
        cout << "How many rows and columns would you like to play with? (x, y): ";
        scanf("%i, %i", &numRows, &numCols);
        if ((numRows <= 10 && numRows > 1) && (numCols <= 10 && numCols > 1)) {
            goodSize = true;
        }
        else {
            goodSize = false;
            cout << "Error." << endl;
        }
    } while(!goodSize);

    int num = 1;
    initialize(dispArray, numRows, numCols);
    initialize(numArray, numRows, numCols, 5);

    //initialize checking array
    bool checkArray[ROWS][COLS];
    //assign all values of checkArray to false
    for(int x = 0; x < ROWS; x++) {
        for(int y = 0; y < COLS; y++) {
            checkArray[x][y] = false;
        }
    }

    display(dispArray, numRows, numCols);

    int points = 10;
    
    //sentinel variable
    char play = 'Y';

    //initialize vars
    int xCoord;
    int yCoord;
    int yGuess;
    int xGuess;

    //loop to run the game
    do{
        //take user coordinates to reveal
        cout << "Enter coordinates to reveal (x, y): ";
        scanf("%i, %i", &xCoord, &yCoord);
        //check that coords are valid
        if(xCoord > numCols || yCoord > numRows || xCoord < 0 || yCoord < 0) {
            cout << "Error. Invalid Coordinates\n";
            continue;
        }

        //set checkArray value to true
        checkArray[xCoord][yCoord] = true;
        //copy numArray value to dispArray
        dispArray[xCoord][yCoord] = numArray[xCoord][yCoord];

        //display dispArray
        display(dispArray, numRows, numCols);

        //get coordinates to match
        bool goodCoords;
        do{
            cout << "Now, guess coordinates to match (x, y): ";
            scanf("%i, %i", &xGuess, &yGuess);
            //assign goodCords to true if the coords are not repeats
            goodCoords = !checkRepeat(checkArray, xGuess, yGuess);
            //print error statements and make sure guesses are within bounds of array
            if(!goodCoords) {
                cout << "\nError. Please enter coordinates that have not been already revealed.\n"; //inform user
            }
            else if(xGuess > ROWS || yGuess > COLS || xGuess < 0 || yGuess < 0) {
                cout << "\nError. Invalid coordinates.\n";
                goodCoords = false;
            }
        } while(!goodCoords);

        //check to see if guessed value matches the revealed value
        if(numArray[xCoord][yCoord] == numArray[xGuess][yGuess]) {
            cout << "\nCorrect! Your guess matches!\n";
            //copy num value to display
            dispArray[xGuess][yGuess] = numArray[xGuess][yGuess];
            points += 2;
        }
        else {
            points--;
            cout << "\nIncorrect! You are down to " << points << " points.\n";
        }

        //use if-else to determine if loop continues
        if(points > 0) {
            cout << "Would you like to make another guess? (Y/N): ";
            cin >> play;
        }
        else {
            cout << "You ran out of points! Too bad!";
            break;
        }

    } while(toupper(play) == 'Y');


    //output score
    cout << "\nYou ended with " << points << " points! Good job!" << endl;
    return 0;

}


