// Saboor Malik
// CSP 31B C++ 71987
// Programming Assignment #1

#include <iostream>
#include <string>
using namespace std;

class Rectangle{
    public:
        void heightValue(double h){
            height = h;
        }

        void widthValue(double w){
            width = w;
        }

        double Area(){
            double result = height*width;

            return result;
        }

    private:
        double height;

        double width;
        
};



int main(){
    Rectangle obj;

    obj.heightValue(5);
    obj.widthValue(3);

    cout << "The Area of the Rectangle is " << obj.Area() << endl;

    return 0;
}
