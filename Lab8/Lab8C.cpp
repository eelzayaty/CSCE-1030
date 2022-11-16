/*
*   Author: Ethan El-Zayaty
*   Date: 11/02/2022
*   Instructor: Dr Shrestha
*   Description: Print and store the maxmimum grades of a class
*/

#include "Lab8_header.h"

int main() {
    
    float grades[ROWS][COLS];
    float maximum[ROWS];
    int num;

    cout << "How many students in the class?";
    cin >> num;

    for(int row = 0; row < num; row++) {
        for(int col = 0; col < COLS; col++) {
            cout << "Enter QUIZ #" << col+1 << " for STUDENT #" << row+1 << ": ";
            cin >> grades[row][col];
        }
    }

    computeMaximum(grades, num, maximum);

    for(int row = 0; row < num; row++) {
        for(int col = 0; col < COLS; col++) {
            cout << grades[row][col] << " ";
        }
        cout << endl;
    }  
        cout << "The maximum grades:\n";
        showArray(maximum, num);
        cout << endl;
}