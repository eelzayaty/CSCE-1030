/*
*   Author: Ethan El-Zayaty
*   Date: 10/26/2022
*   Instructor: Dr Shrestha
*   Description: Find and print the minimum values in each row and column of a 2d array
*/

#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>

using namespace std;
int main() {
    //given template
    const int ROW_SIZE = 2;
    const int COL_SIZE = 5;
    int matrix[ROW_SIZE][COL_SIZE];
    for(int x = 0; x < ROW_SIZE; x++) {
        for(int y = 0; y < COL_SIZE; y++) {
            cout << "Enter data for row " << x << " column " << y << ": ";
            cin >> matrix[x][y];
        }
    }

    cout << "You entered: " << endl;
    for(int x = 0; x < ROW_SIZE; x++) {
        for(int y = 0; y < COL_SIZE; y++) {
            cout << matrix[x][y] << "\t";
        }
        cout << endl;
    }
    //end given template

    //min arrays
    int colMins[COL_SIZE];
    int rowMins[ROW_SIZE];

    //find col mins
    int min;
    for(int x = 0; x < COL_SIZE; x++) {
        min = matrix[0][x];
        for(int y = 1; y < ROW_SIZE; y++) {
            if(matrix[y][x] < min) {
                min = matrix[y][x];
            }
        }
        colMins[x] = min;
    }

    //find row mins
    for(int x = 0; x < ROW_SIZE; x++) {
        min = matrix[x][0];
        for(int y = 1; y < COL_SIZE; y++) {
            if(matrix[x][y] < min) {
                min = matrix[x][y];
            }
        }
        rowMins[x] = min;
    }

    //print results
    cout << "The minimum value in each column is: ";
    for(int x = 0; x < COL_SIZE; x++) {
        cout << colMins[x] << ",  ";
    }
    cout << "\nThe minimum value in each row is: ";
    for(int x = 0; x < ROW_SIZE; x++) {
        cout << rowMins[x] << ", ";
    }

    return 0;
}