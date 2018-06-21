#include<iostream>
using namespace std;

class circle
{
private:
	double r, a, cir;
public:
	circle(double r = 0) { this->r = r;}
	circle &circum() { cir = 2*3.14*r ; return *this;}
	circle &area() { a = 3.14*r*r; return *this;}
	circle &show() { cout << " Circum = " << cir << " Area = " << a << endl; return *this;}
	};
	
int main(void)
{
	circle c1(5);
	c1.circum().area().show();
	return 0;
}
