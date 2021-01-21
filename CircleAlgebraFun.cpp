#include <iostream>

using namespace std;

int main() {
	double radius = 0.0;
	double circumference = 0.0;
	double area = 0.0;
	const double PI = 3.14159;
	
	cout << "Happy Tuesday!!" << endl;
	
	// the software development method
	// 1. specify the problem requirements
	// we need to compute the area and circumference of a circle given its radius
	// 2. analyze the problem
	// inputs: radius
	// outputs: area, circumference
	// relationships between the inputs and the outputs: A=pi * radius squared, C=2 * pi * radius
	// 3. design an algorithm to solve the problem
	// PSEUDOCODE
	// prompt the user for the radius
	// get the radius and store it
	// compute the circumference and area using the above formulas
	// display the circumference and area to the user
	// 4. implement the algorithm
	cout << "Please enter the radius: " << endl;
	cin >> radius;	
	circumference = 2 * PI * radius;
	area = PI * radius * radius;	
	cout << "A circle with radius " << radius << " has area " << area << " and circumference " << circumference << endl;
	// 5. test and verify the completed program
	// 6. maintain and update the program

	return 0;
}
