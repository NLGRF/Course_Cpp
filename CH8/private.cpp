#include <iostream>
using namespace std;

class box
{
		double L, W, H;
	public:
		void setVar(double, double, double);
		double getVol(void);
		double getSurf(void);
};
		void box::setVar(double x, double y, double z){
			L=x; W=y; H=z;
		}
		double box::getVol(void) { 
         return L * W * H;
      }
		double box::getSurf(void) {
         return (2*L*W)+(2*L*H)+(2*W*H);
      }
      
int main ()
{
	box V1;
//	V1.W = 4.00; V1.L = 5.00; V1.H = 3.00;
	V1.setVar(4.00,5.00,3.00);
	cout << " Volume of Box = " << V1.getVol() << endl; 
	cout << " Surface of Box = " << V1.getSurf() << endl; 
	return 0;	
}
