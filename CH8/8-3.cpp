#include <iostream>
using namespace std;

class box
{
		double L, W, H;
	public:
		box(double x, double y, double z);
		double getVol(void);
};

	box::box(double x, double y, double z):L(x), W(y), H(z){}
/*		box::box(double x, double y, double z){ 
         	L = x;
			W = y;
			H = z;
      } */
      double box::getVol(void){
      	return L * W * H;
	  }
	  
      int main ()
{
	box V1(4.00, 5.00, 3.00);
	box V2(6.00, 4.00, 2.00);
	cout << " Volume of box V1 = " << V1.getVol()  << endl; 
	cout << " Volume of box V2 = " << V2.getVol()  << endl; 
	return 0;	
}
