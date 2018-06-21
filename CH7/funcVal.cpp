#include <iostream>
using namespace std;

void funcVal(int x, int y);

int main()
{
  int x = 20, y = 30;

  funcVal(x, y);  
	cout << " x = " << x << " ,y = " << y;		    
  return 0;
}
void funcVal(int x, int y) 
{
 	x = 100;
	y = 200;
}


