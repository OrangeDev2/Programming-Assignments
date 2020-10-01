/*
Saboor Malik
CSP 31B 71987
Assignment - Area of Shape
*/

#include <iostream>
using namespace std;

// Base class called Shape.
class Shape{
protected:
	float height;
	float width;

public:
	Shape(){
		// Will be assigned to different values later.
		width = 5;
		height = 3;
	}
};

// Subclass derived variables from Base Class called Shape.
// These 2 classes will Inherit the 2 values from the Shape class
class Triangle : public Shape{
public:
	Triangle(float x, float y){
		width = x;
		height = y;
	}

	void getArea(){
		float result = (height*width)/2;

		cout << "For an triangle with a base of " << width << " and a height of " << height << " the area would be " << result << "\n\n\n";
	}
};

// Subclass derived variables from Base Class called Shape.
class Rectangle : public Shape{
public:
	Rectangle(float x, float y){
		width = x;
		height = y;
	}

	void getArea(){
		int result = height*width;

		cout << "For a rectangle with a base of " << width << " and a height of " << height << " the area would be " << result << endl;;
	}
};

int main(){
// Create instances for 2 subclasses, Triangle and Rectangle.  Access constructors to give the value. Then call the methods, getArea() to get the result
	Triangle obj1(5,2);

	Rectangle obj2(5, 3);

	obj1.getArea();
	obj2.getArea();

    return 0;
}
