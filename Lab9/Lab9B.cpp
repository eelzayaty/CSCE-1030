/*
*   Author: Ethan El-Zayaty
*   Date: 11/16/2022
*   Instructor: Dr Shrestha
*   Description: Program to copy data from one input file to an output file using .get() and .put()
*/

#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;
int main() {
    
    char c;
    ifstream fin;
    ofstream fout;

    //get name of input file
    char inputFile[15];
    cout << "Enter the name of the input file: ";
    cin >> inputFile;

    //get name of output file
    char outputFile[15];
    cout << "Enter the name of the output file: ";
    cin >> outputFile;

    //open both files
    fin.open(inputFile);
    fout.open(outputFile);

    //make sure input file exists
    if(fin.fail()) {
        cout << "File Error." << endl;
        exit(1);
    }

    //inform user
    cout << "*** Input file Contents have been copied to output file ***" << endl;

    //copy input to output
    do{
        fin.get(c); //get individual characters
        fout.put(c); //place individual characters
    }while(!fin.eof());

    //close files
    fin.close();
    fout.close();

    return 0;
}