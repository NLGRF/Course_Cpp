#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int choice;
	float r, pi = 3.14;
	cout << "This is calculation for circle and sphere" << endl;
	cout << "Enter the number of radius : ";
	cin >> r;
	cout << "1. Calculate the circumference of circle" << endl; 
	cout << "2. Calculate the area of circle" << endl; 
	cout << "3. Calculate the volume of sphere" << endl; 
	cout << "Enter the choice : ";
	cin >> choice;
	switch (choice)
	{
		case 1: float circum;
			circum = 2.0 * pi * r;
			cout << "Circumference of circle is " << circum << endl; 
		break;
		case 2: float area;
			area = pi * pow(r,2);
			cout << "Area of circle is " << area << endl; 
		break;
		case 3: double volume;
			volume =  (4.0/3.0) * pi * pow(r,3);
			cout << "Volume of circle is " << volume << endl; 
		break;
		default : cout << "Invalid choice!" << endl;
	}
	return 0;
}
