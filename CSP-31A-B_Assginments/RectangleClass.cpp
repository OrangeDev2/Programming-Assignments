/*
Saboor Malik
Mr. McClanahan
CSP 31B C++ Programming 71987
*/

#include <iostream>
#include <string>
using namespace std;

class Rectangle{
    public:
    // A member function which sets height value
    // Note: Cannot add int or double since it requires a return.  Thus "void" declaration.
    void heightValue(double h){
        height = h;
    }

    // A member function which sets width value
    void widthValue(double w){
        width = w;
    }

    // A member function which calculate the Area of the Rectangle
    double Area(){
        double result = height*width;

        return result;
    }

    private:
    //Private data variables of "height" and "width".  Both are declared double since user can enter decimal number.
        double height;
        double width;
        
};



int main(){
  // An instance of class "Rectangle"
  Rectangle obj;

  /*
  obj.heightValue(5);

  obj.widthValue(3);
  */

  string userInput;


  string going = "go";

  while(going == "go"){

    // Ask user whether he/she/unknown wants default answer or enter their own input.
    cout << "\nWould you like to enter your numbers to calculate the area of Rectangle? \nEnter 'y' or 'yes'" << endl;
    cout << "\nOtherwise, Enter 'n' or 'no' to get a default answer.\n" << endl;
    cin >> userInput;

    // If user says yes.
    if (userInput == "y" || userInput == "yes"){
        // Declare variables for user input of "height" and "width".
        double userInputHeight;
        double userInputWidth;

        // Ask user for "height" input
        cout << "\nEnter the number of height. " << endl;
        cin >> userInputHeight;

        // Ask user for "width" input
        cout << "\nEnter the number of width. " << endl;
        cin >> userInputWidth;

        // Access data variables in Class "Rectangle"
        obj.heightValue(userInputHeight);
        obj.widthValue(userInputWidth);

        // Output
        cout << "\n\nThe Area of the Rectangle is " << obj.Area() << endl;
    } 
    // If user says no.
    else if(userInput == "n" || userInput == "no"){
      obj.heightValue(5);

      obj.widthValue(3);

      // Output
      cout << "The Area of the Rectangle is " << obj.Area() << endl;
    }
    else {
      cout << "ERROR: Please re-run the program." << endl;
    }

    cout << "\nWould you like to continue? Enter 'go' \nOtherwise, enter any key or 'F' to stop." << endl;
    cin >> going;
  }

    

    return 0;
}
