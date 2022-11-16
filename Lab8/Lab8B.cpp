/*
*   Author: Ethan El-Zayaty
*   Date: 11/02/2022
*   Instructor: Dr Shrestha
*   Description: Find the maximum value within an array using a function
*/

#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>

using namespace std;

const int SIZE = 10;

/*
*   Description: find maximum value of array
*   Arguements: array with rand ints
*   Return: int max value
*/
int findMax(const int* arr) {
    int max = arr[0];
    for(int x = 1; x < SIZE; x++) {
        if(arr[x] > max) {
            max = arr[x];
        }
    }
    return max;
}

int main() {
    int arr[10];
    srand(time(NULL));
    for(int x = 0; x < SIZE; x++) {
        arr[x] = rand() % 51 + 50;
        cout << arr[x] << "\t";
    }
    cout << endl;

    cout << "Maximum value in array is " << findMax(arr);

    return 0;
}