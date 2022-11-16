/* Author: Ethan El-Zayaty (ethanel-zayaty@my.unt.edu)
   Date: 10/5/22
   Instructor: Dr Shrestha
   Description: Find the sum (inclusive) of all ODD integers between two randomly generated ints
 */

//code had to be updated to odd ints only
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
int main() {
    //seed rand
    srand(time(NULL));

    //generate rand nums
    int num1 = rand() % 21 + 10;
    int num2 = rand() % 21 + 40;
    int sumInts = 0;

    cout << "The sum of all odd integers between " << num1;
    
    //get sum
    while (num1 <= num2)
    {
        if(num1 % 2 == 1) {
            sumInts += num1;
        }
        num1++;
    }

    cout << " and " << num2 << " is " << sumInts << endl;
}