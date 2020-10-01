// Saboor Malik
// CSP 31B 71987
// Lesson 5 - Programming Assignment #1

#include <iostream>
#include <string>
using namespace std;

// Base class - "Stuff"
class Stuff{
    public:
        // Method 1
        void Add(int myNum1, int myNum2){
            cout << "Result: " << myNum1 + myNum2 << endl;
        }
        // Method 2: Float + int
        void Add(int myNum1, double myFloat){
            cout << "Result: " << myNum1 + myFloat << endl;
        }
        // Method3
        void Add(string myStr1, string myStr2, string myStr3){
            cout << "Result: " << myStr1 + myStr2 + myStr3 << endl;
        }
};

int main(){
    // instance of class "Stuff"
    Stuff obj;

    int myNum1 = 5, myNum2 = 3;
    float myFloat = 6.9;
    string myStr1 = "Saboor ", myStr2 = "Malik ", myStr3 = "CSP 31B";

    // Call Add() with passing parameters in base class "Stuff"
    obj.Add(myNum1, myNum2);
    obj.Add(myNum1, myFloat);
    obj.Add(myStr1, myStr2, myStr3);
}