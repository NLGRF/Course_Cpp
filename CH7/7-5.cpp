#include <iostream>
using namespace std;

void funcRef(int &m);

int main()
{
  	int x = 20;
  	funcRef(x);  
	cout << " x = " << x;
  	return 0;
}
void funcRef(int &m) 
{
	cout << " m = " << m << endl;
 	m = 100;
}


