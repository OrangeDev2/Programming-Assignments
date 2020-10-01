#include <iostream>
using namespace std;

// A function which this program will run 4 lines of output 

int main(){

    /* character of the string for welcome message has 28 characters */

    string greeting = "Greetings - this is CSP 31A:";

    /* 
    int charactersCount = greeting.size();
    checking the size of characters of greeting[]
    cout << charactersCount << endl; (RESULT): 28 characters
     */

    string myName = "Saboor Malik";
    string myCity = "Lathrop";

    // output

    cout << greeting << "\n" << "----------------------------" << "\n" << myName << "\n" << myCity << endl;


    return 0;

}