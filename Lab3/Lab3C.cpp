/* Author: Ethan El-Zayaty (ethanel-zayaty@my.unt.edu)
   Date: 9/21/22
   Instructor: Dr Shrestha
   Description: Use various printf and scanf statements
 */

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
int main()
{
    char a;
    char b;
    //prompt and scan for two char variables
    printf("Please enter two characters: ");
    scanf("%c %c",&a, &b);
    //prompt and scan for two integers
    int c;
    int d;
    printf("Please enter two integers: ");
    scanf("%i %i", &c, &d);
    //prompt and scan for two doubles
    double e;
    double f;
    printf("Please enter two double variables: ");
    scanf("%lf %lf", &e, &f);

    //print all values
    printf("You entered %c for a, %c for b, %i for c, %i for d, %.3lf for e, and %.3lf for f. \n", a, b, c, d, e, f);
    printf("The value of f in scientific notation is %ef", f);
}