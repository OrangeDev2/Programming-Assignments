// Saboor Malik
// CSP 31B 71987
// House with OOP: Programming Assignment #1


#include <iostream>
#include <string>
using namespace std;

class Address{
    private:
        string house_number;
        string city;
        string state;
    public:
        void addressGetDetails(){
            cout << "Enter the house number: ";
            getline(cin, house_number);

            cout << "Enter the city: ";
            getline(cin, city);

            cout << "Enter the state: ";
            getline(cin, state);
        }

        void displayAddressDetails(string house_name){
            cout << "Address is: " << house_number + " " << house_name + " " + city + ", " + state << "\n" << endl;
        }
};

class Room{
    private:
        string room_length;
        string room_width;
        string room_name;
    public:
        void getRoomDetails(string room_number){
            cout << "Enter the room name " + room_number + ": ";
            getline(cin, room_name);
            cout << "Enter the room length: ";
            getline(cin, room_length);
            cout << "Enter the room width: ";
            getline(cin, room_width);

            //cout << "Room Name: " << room_name << " , Length: " << room_length << " , Width: " << room_width << endl;
        }

        void displayRoomDetails(){
            cout << "Room Name: " << room_name << ", Length: " << room_length << ", Width: " << room_width << "\n" << endl;
        }
};

// House Class
class House{
    private:
        // Private Variables as required by Rubric.  Done!
        string house_name;
        string address;
        string room1;
        string room2;
        string room3;
    
    public:
        Address obj; // object
        Room obj1; // object for each room
        Room obj2; // object for each room
        Room obj3; // object for each room

        House(){ // Constructor
            // Get Details
            cout << "Enter the house name: ";
            getline(cin, house_name);

            // Address Details
            obj.addressGetDetails();

            // Room Details
            obj1.getRoomDetails("1"); // Passing parameters for easy display -> room 1, room 2, room 3.
            obj2.getRoomDetails("2"); // room 2
            obj3.getRoomDetails("3"); // room 3

            /* Output */
            // Output House name
            cout << "\n" << endl;
            cout << "Display House name: " << house_name << endl;

            // Output Address
            obj.displayAddressDetails(house_name);

            // Output Room Details
            cout << "Display Room Details 1:" << endl;
            obj1.displayRoomDetails();
            cout << "Display Room Details 2:" << endl;
            obj2.displayRoomDetails();
            cout << "Display Room Details 3:" << endl;
            obj3.displayRoomDetails();

        }

};


int main(){
    House obj; // Call constructor

    return 0;
}

