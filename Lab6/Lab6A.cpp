/*
*   Author: Ethan El-Zayaty
*   Date: 10/19/2022
*   Instructor: Dr Shrestha
*   Description:  Generate random ascii values to fill an array and print it
*/

#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <ctime>

using namespace std;
int main() {
    int arr[5];
    srand(time(NULL)); //seed time
    //generate rand vals to fill array
    for(int x = 0; x < 5; x++) {
        arr[x] = (rand() % 25) + 65;
    }
    //print all vals as characters
    for(int x = 0; x < 5; x++) {
        cout << static_cast<char>(arr[x]);
    }
    return 0;
}