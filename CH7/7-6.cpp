#include <iostream>
using namespace std;

void funcPtr(int *m);

int main()
{
  	int x = 20;
  	funcPtr(&x);  
	cout << " x = " << x; 
  	return 0;
}

void funcPtr(int *m) 
{
	cout << " m = " << *m << endl;
 	*m = 100;
}
