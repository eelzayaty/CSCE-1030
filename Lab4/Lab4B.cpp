/* Author: Ethan El-Zayaty (ethanel-zayaty@my.unt.edu)
   Date: 9/28/22
   Instructor: Dr Shrestha
   Description: Compute the bonus earned by a salesperson given their years of experience and sales amount
 */

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
int main()
{
    double bonus = 100;
    double totalSales;
    int yearsExperience;

    printf("Please enter your total sales and years of experience: ");
    scanf("%lf %i", &totalSales, &yearsExperience);
    //determine bonus
    (yearsExperience >= 10) ? bonus += totalSales * 0.03 : bonus += totalSales * 0.02;
    //determine if sales > 100000
    (totalSales > 100000) ? bonus += 500: bonus += 0;

    //print resulting bonus
    printf("With your years of experience and your total sales, you have earned a bonus of $%.2lf", bonus);

}