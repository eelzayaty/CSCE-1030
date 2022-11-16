/* Author: Ethan El-Zayaty (ethanel-zayaty@my.unt.edu) 
   Date: 9/14/2022
   Instructor: Dr Shrestha
   Description: Writing a simple program to find the volume of a sphere
 */

#include <iostream>
#include <cmath>
using namespace std; 
int main( )  
{
   const float pi = 3.14159;
   float radius;
   float x = (4.0/3); //initialize 4/3 as a variable for convenience

   //prompt user
   cout << "Enter radius of sphere (in cm): ";
   cin >> radius; //take value of radius from user

   float volume = (x * pi) * pow(radius, 3); //complete calculation

   //return volume to user
   cout << endl << "The volume of the sphere is " << volume << " cubic cm" << endl;

   return 0;  
}