/*
Saboor Malik
CSP 31A
Module 7 - Programming Assignment #2
*/

#include <iostream>
using namespace std;

int main(){
    // Assignment to true that has a value of at least 1: other than 0.
    int loopResponse = 0;

    // Inital variable ready to be assinged for user input.
    int user_input;

    
    do {
      cout << "Enter any value: ";
      cin >> user_input;

    // if-statement whether the number is even or odd.
      if (user_input % 2 == 0)
        cout << "\nThe value you entered is even. ";
      else
        cout << "\nThe value you entered is odd. ";

      // Check whether the input of user's value is 5, 10, 15.
      switch (user_input){
        case 5: cout << "\nThe value you entered is 5"; break;
        case 10: cout << "\nThe value you entered is 10"; break;
        case 15: cout << "\nThe value you entered is 15"; break;
        default: cout << "\nThe value entered was not 5, 10 or 15."; break;
      }

    // Ask if user want to continue.
      cout << "\n\nDo you want to do it again? Enter any number other than 0 as in yes.  Otherwise, enter 0. ";
      cin >> loopResponse;


    }
    // As long the condition is not equal to 0, the loop repeats.
    while (loopResponse != 0);
}