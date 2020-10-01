// Saboor Malik
// CSP 31B 71987
// House with OOP: Programming Assignment #1


#include <iostream>
#include <string>
using namespace std;

// class House
class House{
    private:
        // variables
        string house_name;
        string address;
        // 3 rooms
        int rooms1;
        int rooms2;
        int rooms3;

        //instances of other classes.
        //Address addressObj;
        //Room roomsObj;

    public:
        // Use methods for input, although each method are in Address class and Room class.  Call the methods with the instances we declared.
        //...
        House(){
            cout << "Enter the house name: ";
            cin >> house_name;

        }
        


};

// Address Class
class Address{
    private:
        // Variables used for address.
        int houseNum;
        string city;
        string state;

    public:

        void address_Details(){
            cout << "Enter the house number ";
            cin >> houseNum;
            cout << houseNum << endl;

            cout << "Enter the city ";
            cin >> city;
            cout << city << endl;

            cout << "Enter the state ";
            cin >> state;
            cout << state << endl;
        }
};

// Room class
class Room{
    private:
        int length, width;
        string name;

    public:
        void roomDetails(){
            cout << "Enter the name for room ";
            cin >> name;
            cout << name << endl;

            cout << "Enter the length ";
            cin >> length;
            cout << length << endl;

            cout << "Enter the width ";;
            cin >> width;
            cout << width << endl;
    }
};

// main function
int main(){
    // an instance of class House only.
    House houseObj;

    return 0;
}