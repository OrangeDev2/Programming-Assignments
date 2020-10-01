/*
Saboor Malik
CSP 31B 71987
Programming Assignment #3
*/

#include <iostream>
using namespace std;

void sum_passByRef(int &testInt1, int &testInt2){
    int result = testInt1 + testInt2;
    cout << "The sum of 5 and 13 is " << result << endl;
}

void sum_passByValue(int testInt1, int testInt2){
    int result = testInt1 + testInt2;
    cout << "The sum of 5 and 13 is " << result << endl;
}

int main(){
    int IntOne = 5;
    int IntTwo = 13;

    // Output statement will look this way (if the variables have the values of 5 and 6): The sum of 5 and 6 is 11  
    sum_passByRef(IntOne, IntTwo);
    sum_passByValue(IntOne, IntTwo);
    return 0;
}