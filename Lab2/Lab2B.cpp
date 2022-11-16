/* Author: Ethan El-Zayaty (ethanel-zayaty@my.unt.edu) 
   Date: 9/14/2022
   Instructor: Dr Shrestha
   Description: Declaring, initializing, and printing variables
 */

#include <iostream>
using namespace std; 
int main( )  
{
    //define vars
   int var1;
   char var2;
   float var3;
   float var4;
   
   //set as values
   var1 = 40;
   var2 = 'E';
   var3 = 4.6;

   var4 = var3 + var2 % var1; //calculate var4
   //adding var2 adds the ASCII value of 'E'

   cout << "Value of var4 = " << var4 << endl;
   return 0;  
}