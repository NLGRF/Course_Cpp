#include <iostream>
using namespace std;
void maximum(int, int);
int main ()
{
 	int x = 10;
 	int y = 20;
 	maximum(x, y);
 	return 0;
}
void maximum(int val1, int val2)
{
	int max;      
	if (val1 > val2)  
  	max = val1;
	else
  	max = val2; 
  
  cout << "Max value is : " << max << endl;
}
