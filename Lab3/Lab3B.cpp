/* Author: Ethan El-Zayaty (ethanel-zayaty@my.unt.edu)
   Date: 9/21/22
   Instructor: Dr Shrestha
   Description: Use a random number generate to generate randomized initials
 */

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
int main()
{
    //generate seed
    srand(time(0));
    //generate random first initial
    char initial1 = rand() % 26 + 65;
    //generate random second initial
    char initial2 = rand() % 26 + 65;

    cout << "Randomly generated initials: " << initial1 << initial2 << endl;
}