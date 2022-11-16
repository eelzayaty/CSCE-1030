/* Author: Ethan El-Zayaty (ethanel-zayaty@my.unt.edu)
   Date: 10/5/22
   Instructor: Dr Shrestha
   Description: COmplete various operations with user-input integers
 */

#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;
int main()
{
    //variable declarations
    enum Operation {Multiply='M', Add='A', Difference='D'};
    int result;
    int num1, num2;
    Operation myOperation;
    char choice;
    char doOperation; //controlling variable for do-while loop
    
    cout << "Enter two integers: ";
    cin >> num1;
    cin >> num2;

    do {
        //prompt for value of choice to select operator
        cout << "Please select an operation to be done:\nM for multiplication\nA for addition\nD for difference" << endl;
        cin >> choice;
        //cast entered character to operation for switch case
        myOperation = static_cast<Operation>(toupper(choice));
        switch(myOperation) {
            case Multiply:
                cout << num1 << " * " << num2 << " = " << (num1*num2) << endl;
                break;
            case Add:
                cout << num1 << " + " << num2 << " = " << (num1 + num2) << endl;
                break;
            case Difference:
                //calculate absolute val of difference
                cout << "The difference between " << num1 << " and " << num2 << " is " << fabs(num1-num2) << endl;
                break;
            default:
                cout << "Error! Please enter a valid integer" << endl;
        }
        cout << "Would you like to compute again? (Y/N) " << endl;
        cin >> doOperation;
    } while(toupper(doOperation) == 'Y');

    return 0;
}