#include <iostream>
using namespace std;

class box
{
		double L, W, H;	
	public:
		box(double x, double y, double z);
 		~box();
		double getVol(void); 
};

		box::box(double x, double y, double z):L(x), W(y), H(z){
		cout << " Object is being created" << endl;}
		box::~box() { cout << " Object is being deleted" << endl;}
		double box::getVol(void){ return L * W * H; }	  

int main ()
{
	box V(4.00, 5.00, 3.00);
	cout << " Volume of box V = " << V.getVol()  << endl; 
	return 0;	
}
