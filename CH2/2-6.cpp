#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
	const double pi = 3.141593; 
	double r = 12.4;
	double area, circum, diameter;
	diameter = r * 2;			
 	circum = 2 * pi * r;	
	area = pi * pow(r,2);                 
 	cout << "Diameter = " << diameter << endl ;  
	cout << "Circum  = " << circum << endl ; 	
	cout << "Area = " << area << endl ; 	
  return 0;
}
