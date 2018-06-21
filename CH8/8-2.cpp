 #include <iostream>
using namespace std;

class box	
{	
		double L, W, H;
	public:	
		box();
		double getVol(void);
};
	box::box(){ 
         	L = 4.00;
			W = 5.00;
			H = 3.00;
      }
      double box::getVol(void){
      	return L * W * H;
	  }
      

int main ()
{
	box V;	
	cout << " Volume of box = " << V.getVol()  << endl; 
	return 0;	
}
