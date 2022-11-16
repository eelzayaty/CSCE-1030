/*
*   Author: Ethan El-Zayaty
*   Date: 11/02/2022
*   Instructor: Dr Shrestha
*   Description: Compute max in array
*/

#include "Lab8_header.h"

void computeMaximum(float grades[][COLS], int num, float maximum[]) {
    int max;
    for(int x = 0; x < num; x++) {
        max = grades[x][0];
        for(int y = 1; y < COLS; y++) {
            if(grades[x][y] > max) {
                max = grades[x][y];
            }
        }
        maximum[x] = max;
    }
}