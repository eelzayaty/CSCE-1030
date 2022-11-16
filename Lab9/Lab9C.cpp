/*
*   Author: Ethan El-Zayaty
*   Date: 11/16/2022
*   Instructor: Dr Shrestha
*   Description: Read array from input file and then print array in ascending order to output file
*/

#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;

//basic insertion sort technique to sort all values in array
void insertionSort(double arr[], int len)
{
    double key;
    int y;
    for (int x = 1; x < len; x++)
    {
        key = arr[x];
        y = x - 1;
        while (y >= 0 && arr[y] > key)
        {
            arr[y + 1] = arr[y];
            y--;
        }
        arr[y + 1] = key;
    }
}

int main() {
    
    const int MAX_SIZE = 100; //maximum array size

    ifstream fin;
    ofstream fout;
    //open output and input files
    fin.open("unsorted.dat");
    fout.open("sorted.dat");

    //make sure file exists
    if(fin.fail()) {
        cout << "File Error." << endl;
        exit(1);
    }

    double arr[MAX_SIZE];

    int index = 0; //control variable
    //take in all values within the maximum size
    while(!fin.eof() && index < MAX_SIZE) {
        fin >> arr[index];
        index++;
    }

    insertionSort(arr, index); //by using index-1, we get the full amount of values within the array

    //parse through filled values of array
    for(int x =0; x < index; x++) {
        fout << arr[x] << endl;
    }

    //close input and output
    fin.close();
    fout.close();

    
    return 0;
}