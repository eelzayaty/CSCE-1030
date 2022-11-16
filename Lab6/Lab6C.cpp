/*
*   Author: Ethan El-Zayaty
*   Date: 10/19/2022
*   Instructor: Dr Shrestha
*   Description: Sort array of characters from z-a
*/

#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>

using namespace std;
int main() {

    char arr[] = {'b','f','a','z','m','g','q','t'};
    int key, y;
    for (int x = 1; x < 8; x++) //basic insertion sort method
    {
        key = arr[x]; //create comparison
        y = x - 1; //index to compare to
        while (y >= 0 && arr[y] < key) //loop to move all small values to the right one
        {
            arr[y + 1] = arr[y];
            y--;
        }
        //place value into correct position
        arr[y + 1] = key;
    }
    //print array
    for(int x = 0; x < 8; x++) {
        cout << arr[x] << " ";
    }
    return 0;
}