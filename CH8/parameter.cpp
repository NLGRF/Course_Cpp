#include <iostream>
using namespace std;

class box
{
	public:
		double getVol(double L, double W, double H);
		double getSurf(double L, double W, double H);
};

		double box::getVol(double L, double W, double H) { 
         return L * W * H;
      }
		double box::getSurf(double L, double W, double H) {
         return (2*L*W)+(2*L*H)+(2*W*H);
      }
      
int main ()
{
	box V1;
	cout << " Volume of Box= " << V1.getVol(4.00,5.00,3.00) << endl; 
	cout << " Surface of Box = " << V1.getSurf(4.00,5.00,3.00) << endl; 
	return 0;	
}
