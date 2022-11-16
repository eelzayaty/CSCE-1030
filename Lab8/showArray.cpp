/*
*   Author: Ethan El-Zayaty
*   Date: 11/02/2022
*   Instructor: Dr Shrestha
*   Description: Lone method to print an array
*/

#include "Lab8_header.h"

void showArray(float array[], int size) {
    for(int x = 0; x < size; x++) {
        cout << array[x] << " ";
    }
}