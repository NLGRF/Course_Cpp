#include <iostream>
using namespace std;

void funcVal(int x);

int main()
{
  	int x = 20;
  	funcVal(x);
	cout << " x = " << x;		    
  	return 0;
}
void funcVal(int x) 
{
 	x = 100;
}


