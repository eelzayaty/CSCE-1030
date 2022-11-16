/* Author: Ethan El-Zayaty (ethanel-zayaty@my.unt.edu)
   Date: 9/21/22
   Instructor: Dr Shrestha
   Description: Compute the bonus earned by an employee
 */

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
int main() {
    string name;
    string temp;
    int rate;
    double bonus;
    double salary;

    //prompt user for name and salary
    cout << "Please enter employee name: ";
    getline(cin, name);
    cout << "Please enter employee salary: ";
    cin >> salary;
    //enter bonus rate
    cout << "Please enter the bonus rate (5-15): ";
    cin >> rate;
    //set precision
    cout << fixed << setprecision(2);
    //calculate bonus
    bonus = salary * (static_cast <double>(rate)/100);

    //print result
    cout << name << " earned a bonus of " << bonus << endl;

}