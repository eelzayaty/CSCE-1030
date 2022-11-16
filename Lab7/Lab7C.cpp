/*
*   Author: Ethan El-Zayaty
*   Date: 10/26/2022
*   Instructor: Dr Shrestha
*   Description: Defining functions to compute the bonus for an employee
*/

#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>

using namespace std;

/*
*   Description: Compute the bonus of an employee
*   Arguements: base salary, int experience
*   Return: employee bonus as a double
*/
double computeBonus(double baseSalary, int experience) {
    double bonus;
    if(experience > 5) {
        bonus = baseSalary * 0.05;
    }
    else {
        bonus = baseSalary * 0.03;
    }
    return bonus;
}

//main
int main() {
    double baseSalary;
    int experience;

    cout << "What is your base salary? ";
    cin >> baseSalary;

    cout << "How many years of experience do you have? ";
    cin >> experience;

    cout << "You earn a " << computeBonus(baseSalary, experience) << " bonus.";
    return 0;
}