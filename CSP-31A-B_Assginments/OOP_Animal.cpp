/*
Saboor Malik
Mr. McClanahan
CSP 31A | 50602
*/

#include <iostream>
#include <string>
using namespace std;

// A class of Animal
class Animal {

// Variables in Private
private: 
  string name;
  int age;


public:
// constructor and functions in Public
  Animal(int age1, string name1){
    // Calling/Passing arguments to void functions.
    //Set the private variables
    age = age1;

    name = name1;

    //Didn't think that we can access the variables from void functions inside class.
    /*
    setAge(age1);
    setName(name1);
    */
  }
  // A method prints age when called.
  void getAge(){
    cout << age;
  }

  // A method prints name when called
  void getName(){
    cout << name;
  }

  /*void displayInfo(){
    cout << "The name is " << name << " who is " << age << " years old" << endl;
  }*/
};


// The name is Harry who is 5 years old

int main(){
// 3 different instances of type Animal.  Passing the arguments to constructor in class. 
  Animal lion(19, "King");
  Animal penguin(6, "The Light");
  Animal owl(48, "Ugla");

//Output.  Such as "The name is Harry who is 5 years old".  
//Used 2 different methods for printing name and age.  obj.getAge() and obj.getName().
// Output 3 lines.
  cout << "The name is "; lion.getName(); cout << " who is "; lion.getAge(); cout << " years old" << endl;

  cout << "The name is "; penguin.getName(); cout << " who is "; penguin.getAge(); cout << " years old" << endl;

  cout << "The name is "; owl.getName(); cout << " who is "; owl.getAge(); cout << " years old" << endl;

  return 0;
}