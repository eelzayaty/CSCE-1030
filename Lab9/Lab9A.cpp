/*
*   Author: Ethan El-Zayaty
*   Date: 11/16/2022
*   Instructor: Dr Shrestha
*   Description: Program to calculate the average of three values from a file and print to an output file
*/

#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;
int main() {

    ifstream fin;
    ofstream fout;
    //open input file
    fin.open("data.dat");
    //make sure input file exists
    if(fin.fail()) {
        cout << "File Error." << endl;
        exit(1);
    }
    //open output file
    fout.open("average.dat");

    //loop through to find averages
    int val1;
    int val2;
    int val3;
    float avg;
    while(!fin.eof()) {
        fin >> val1;
        fin >> val2;
        fin >> val3;
        avg = (val1+val2+val3) / 3.0;
        fout << fixed << setprecision(2) << avg << endl; //print value to output file with two decimal places
    }

    //close input and output files
    fin.close();
    fout.close();
    return 0;
}