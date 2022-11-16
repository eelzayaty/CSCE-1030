/*
*   Author: Ethan El-Zayaty
*   Date: 10/26/2022
*   Instructor: Dr Shrestha
*   Description: Working with cstrings and comparing cstrings
*/

#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <cstring>

using namespace std;
int main() {
    //declare 2 cstrings
    char str1[80];
    char str2[80];

    strcpy(str1, "We are completing Lab7 today.");
    cout << "Please enter a sentence: ";
    cin.getline(str2, 79); //get sentence

    int length1 = strlen(str1);
    int length2 = strlen(str2);

    //determine if same length
    if(length1 == length2) {
        cout << "You entered a string with the same length\n";
    }
    else{
        cout << "Strings are different length\n";
        return 0;
    }

    //compare cstrings
    if(strcmp(str1, str2) == 0) {
        cout << "Both strings are the same! Yay! \n";
    }
    else {
        cout << "The strings are not the same.";

    }

    return 0;
}