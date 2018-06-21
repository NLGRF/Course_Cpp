#include <iostream>
using namespace std;
int maximum(int, int);

int main()
{
	int x = 10;
	int y = 20;
	int max;
 	max = maximum(x, y); 
	cout << "Max value is : " << max << endl;
	return 0;
}													
int maximum(int val1, int val2)
{
	int temp;
     
	if(val1 > val2)
    temp = val1;
  else
   temp = val2;

 return temp;
}
