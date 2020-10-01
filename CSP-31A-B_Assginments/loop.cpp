/*
Saboor Malik
CSP 31A 50602
Mr. McClanahan
*/

#include <iostream>
using namespace std;

// A program that calculate the sum of the series (1*1) + (2*2) + (3*3) + ... + (n*n))
// By using the user input for nth term.  Nth term = 5, (1*1) + ... + (5*5), 
// then the total would be 55. 

// A function
int main(){
  
  //inital value for user input.  Use for nth term.
  int valueForNth;

  cout << "\nEnter the value for nth term: ";

  cin >> valueForNth;

  cout << "\nFind the sum of the series (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n):" << "\n----------------------" << "\nInput the value for nth term: " << valueForNth << "\n";
       
  int total = 0;

  for (int i = 1; i <= valueForNth; i++)
    {
    int square = i*i;

    //Add the square to "Total" of 1 to nth term.
    total += square;

    cout << i << "*" << i << " = " << square << "\n";
    }

  // Final Output
  cout << "\nThe sum of the above series is: " << total;

}