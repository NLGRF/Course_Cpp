#include <iostream>
#include <cmath>
#define pi 3.141593
#define nl '\n'
using namespace std;
int main ()
{
	double r = 12.4;
	double area, circum, diameter;
	diameter = r * 2;			
 	circum = 2 * pi * r;	
	area = pi * pow(r,2);                 
 	cout << "Diameter = " << diameter << nl ;  
	cout << "Circum  = " << circum << nl ; 	
	cout << "Area = " << area << nl ; 	
  return 0;
}
