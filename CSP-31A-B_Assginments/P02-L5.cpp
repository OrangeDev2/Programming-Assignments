// Saboor Malik
// CSP 31B 71987
// Lesson 5 - Programming Assignment #2

#include <iostream>
using namespace std;

class MyBaseClass{
    public:
        virtual void display(){
            cout << "Display function of MyBaseClass class" << endl;
        }
};

class SomeDerived : public MyBaseClass{
    public:
        void display(){
            cout << "Display function of SomeDerived class" << endl;
        }

};

class OtherDerived : public MyBaseClass{
    public:
        void display(){
            cout << "Display function of OtherDerived class" << endl;
        }

};

int main(){


    // Instance 1
    SomeDerived deriObj1;

    // Instance 2
    OtherDerived deriObj2; 

    // Instance 3
    MyBaseClass obj;

    // Declare appropriate pointer variable of an address subclass object.  One for each subclass.
    MyBaseClass *basePtr1 = &deriObj1;
    MyBaseClass *basePtr2 = &deriObj2;

    // Call methods: To access members of a structure through a pointer, use the arrow operator.
    obj.display();
    basePtr1->display();
    basePtr2->display();


}