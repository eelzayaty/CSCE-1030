/* Author: Ethan El-Zayaty (ethanel-zayaty@my.unt.edu)
   Date: 9/28/22
   Instructor: Dr Shrestha
   Description: Compare user number to prompted range and then a randomly generated number
 */

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
int main() {
    int userVal;
    int randomVal;
    //generate seed
    srand(time(NULL));

    cout << "Hello! Please enter a number between 200 and 300 (inclusive): ";
    cin >> userVal;
    //see if within bounds
    if(userVal <= 300 && userVal >= 200) {
        //generate random num
        randomVal = (rand() % 101) + 200;
        cout << "Randomly generated number is " << randomVal << endl;
        
        //determine relationship to random num with if-else structure
        if(randomVal > userVal) {
            cout << "Your value is less than the random number." << endl;
        }
        else if(randomVal < userVal) {
            cout << "Your value is greater than the random number." << endl;
        }
        else {
            cout << "Your value is the same is the random number." << endl;
        }
    }
    else {
        cout << "Your value is not within the specified bounds. Error." << endl;
    }

}