/* Author: Ethan El-Zayaty (ethanel-zayaty@my.unt.edu)
   Date: 9/28/22
   Instructor: Dr Shrestha
   Description: Project #1: Simple animations of generating shapes/sentences given user input.
 */

#include <iostream>
#include <string>
#include <iomanip>
#include <unistd.h>

using namespace std;
int main()
{
    //declare length and give it an odd value
    int length;
    do{
        cout << "Please enter an odd integer: ";
        cin >> length;
    } while (length % 2 != 1);

    //declare enum shapes
    enum Shapes {Square=1, Triangle, Pentagon, Sentence, Quit};
    int userAnim;
    char userDecision;
    char randChar;
    int numChars;
    string userSentence;
    int numLines;
    //do loop to run section while the user wants to keep animating
    do {
        //generate seeded int from 33 to 64
        srand(time(NULL));
        randChar = (rand() % 33) + 33;
        cout << "Hello! Please choose an animation type:\n1. Square\n2. Triangle\n3. Pentagon\n4. Sentence\n5. Quit\n";
        cin >> userAnim;
        //variable for triangle animation
        numChars = 1;
        //use switch-case to choose animation type
        switch(userAnim) {
            case Square:
                //outer for loop to determine number of frames necessary
                for(int anims = 1; anims <= length; anims++) {
                    system("clear");
                    //secondary for loop to print each line
                    for(int y = 1; y <= anims; y++) {
                        //inner for loop to print each individual character
                        for(int x = 1; x <= anims; x++) {
                            cout << randChar << " "; 
                        }
                        cout << endl;
                    }
                    sleep(1);
                }
                break;
            case Triangle:
                system("clear");
                // outer for loop to determine number of frames necessary
                for (int anims = 1; anims <= length; anims++)
                {
                    //loop to print starting spaces
                    for (int spaces = (length-anims); spaces > 0; spaces--)
                    {
                        cout << " ";
                    }
                    // inner for loop to print each individual character
                    for (int x = 1; x <= numChars; x++)
                    {
                        cout << randChar;
                    }
                    //loop to print ending spaces
                    for (int spaces = (length - anims); spaces > 0; spaces--)
                    {
                        cout << " ";
                    }
                    cout << endl;
                    sleep(1);
                    //add two more characters in each run
                    numChars +=2;
                }
                break;
            case Pentagon:
                //run triangle algorithm followed by square algorithm
                system("clear");
                // outer for loop to determine number of frames necessary
                for (int anims = 1; anims <= length; anims++)
                {
                    // loop to print starting spaces
                    for (int spaces = (length - anims); spaces > 0; spaces--)
                    {
                        cout << " ";
                    }
                    // inner for loop to print each individual character
                    for (int x = 1; x <= numChars; x++)
                    {
                        cout << randChar;
                    }
                    // loop to print ending spaces
                    for (int spaces = (length - anims); spaces > 0; spaces--)
                    {
                        cout << " ";
                    }
                    cout << endl;
                    sleep(1);
                    // add two more characters in each run
                    numChars += 2;
                }
                //numchars must subtract two otherwise the square portion will be too long
                numChars -= 2;
                //variation of square algorithm to print one fewer line
                for (int anims = 1; anims < length; anims++)
                {
                    // secondary for loop to print each line
                    for (int y = 1; y <= numChars; y++)
                    {
                        cout << randChar;
                    }
                    cout << endl;
                    sleep(1);
                }
                break;
            case Sentence:
                //wipe the newLine char from entry
                cin.ignore();
                cout << "Please enter a string: ";
                //use getLine to read whole sentence
                getline(cin, userSentence);
                //make seperate numLines variable to track how many blank lines must be printed
                numLines = 1;
                system("clear");

                //scan through every index in userSentence
                for(int index = 0; index < userSentence.length(); index++) {
                    //check if it is a digit
                    if(isdigit(userSentence.at(index))) {
			userSentence.erase(index, 1);
			system("clear");
			for(int x = 0; x < numLines; x++) {
				cout << " " << endl;
			}
			cout << userSentence << endl;
			index--; //adjust for losing a character in userSentence
			numLines++;
			sleep(1);
                    }
                }
                break;
            case Quit:
                //if user enters quit, immediately break out of loop
                goto quit;
                break;
            default:
                break;
        }
        //prompt user about animating again 
        cout << "\nWould you like to animate again? (Y/N)\n";
        cin >> userDecision;
        system("clear");
    } while (toupper(userDecision) == 'Y'); //accounts for upper/lowercase

    //output goodbye message
        quit: 
            cout << "Thank you for animating! Goodbye!\n";
}