#include <iostream>
using namespace std;

void funcPtr(int *x);

int main()
{
  	int m = 20;
  	funcPtr(&m);  
	cout << " m = " << m;		    
  	return 0;
}
void funcPtr(int *x) 
{
	cout << x;
 	*x = 100;
}


