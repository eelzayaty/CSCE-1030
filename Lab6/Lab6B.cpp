/*
*   Author: Ethan El-Zayaty
*   Date: 10/19/2022
*   Instructor: Dr Shrestha
*   Description: Copying values from one array to another
*/

#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>

using namespace std;
int main() {
    const int SIZE=12;
    int heightSum = 0;
    int height[SIZE];
    int aboveAverage[SIZE];
    double average;

    for(int x = 0; x < SIZE; x++) {
        cout << "Enter height in inches of student #"<<x + 1<<":"; //get height
        cin >> height[x];
        heightSum += height[x]; //add to sum
    }
    average = static_cast<double>(heightSum) / SIZE; //find avg

    int counter = 0;
    for (int x = 0; x < SIZE; x++) //find if above avg
    {
        if(height[x] > average) {
            aboveAverage[counter] = height[x];
            counter++;
        }
    }

    cout <<"You entered: " << endl;
    for(int x =0; x < SIZE; x++) { //print all vals
        cout << height[x] << " ";
    }
    cout << "\nAverage height: " << average << endl;

    cout << "Above average heights: " << endl;
    
    for(int x = 0; x < counter; x++) {
        cout << aboveAverage[x] << " ";
    }

    return 0;
}