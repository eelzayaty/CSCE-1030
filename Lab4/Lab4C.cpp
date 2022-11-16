/* Author: Ethan El-Zayaty (ethanel-zayaty@my.unt.edu)
   Date: 9/28/22
   Instructor: Dr Shrestha
   Description: Take a user input character (W,S,F,G) corresponding to a season and outputs a string about said season
 */

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
int main()
{
    enum Seasons{W = 'W',S = 'S',F = 'F',G = 'G'};
    char userInput;
    Seasons userSeason;

    //prompt user for season
    cout << "Please enter a season (W for winter, S for summer, F for fall, and G for spring): ";
    //take user season
    cin >> userInput;
    //cast input as a seasons variable so we can assign it to userSeason
    userSeason = static_cast<Seasons>(toupper(userInput));
    //check which season the user inputted
    switch (userSeason)
    {
        case W:
            cout << "It is rather cold outside.";
            break;
        case S:
            cout << "It is rather hot outside.";
            break;
        case F:
            cout << "The weather looks good.";
            break;
        case G:
            cout << "The flowers are blooming.";
            break;
        default:
            cout << "Wrong choice";
    }
    cout << endl;

}