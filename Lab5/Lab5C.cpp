/* Author: Ethan El-Zayaty (ethanel-zayaty@my.unt.edu)
   Date: 10/5/22
   Instructor: Dr Shrestha
   Description: Use a for loop structure to count amount of vowels and consonants inside of a string
 */

#include <iostream>
#include <string>

using namespace std;
int main() {
    string userSentence;
    int numVowels = 0;
    int numConsonants = 0;
    int numAlphas;
    char currChar;

    cout << "Please enter a sentence: ";
    getline(cin, userSentence);

    for(int index = 0; index < userSentence.length(); index++) {
        //determine if alphabetical
        if(isalpha(userSentence.at(index))) {
            //convert to uppercase to eliminate need to analyze case
            currChar = toupper(userSentence.at(index));
            switch(currChar) {
                //if any vowel, increment numVowels
                case 'A':
                case 'E':
                case 'I':
                case 'O':
                case 'U':
                    numVowels++;
                    break;
                default:
                    numConsonants++;
                    break;
            }
        }
    }

    cout << "Your sentence has " << numVowels << " vowels and " << numConsonants << " consonants" << endl;
}