/*
*   Author: Ethan El-Zayaty
*   Date: 11/02/2022
*   Instructor: Dr Shrestha
*   Description: Compare user integer to random integer using two methods
*/

#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>

using namespace std;

/*
*   Description: Generate random number between 1 and 100
*   Arguements: None
*   Return: Random integer
*/
int getRandom() {
    srand(time(NULL));
    return rand() % 99 + 1;
}

/*
*   Description: Compare user int to random
*   Arguements: user guess int
*   Return: void
*/
void compare(int guess) {
    int num = getRandom();
    if(guess == num) {
        cout << "Your guess was correct!\n";
    }
    else if(guess > num) {
        cout << "You guessed more than the random number\n";
    }
    else {
        cout << "You guessed less than the random number\n";
    }
    cout << "The correct value was " << num;
}

int main() {
    int guess;
    cout << "Please enter a number guess: ";
    cin >> guess;
    compare(guess);
    return 0;
}