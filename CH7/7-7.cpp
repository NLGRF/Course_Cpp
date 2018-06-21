#include <iostream>
#include <string>
using namespace std;

void disp(string color);
int main()
{
  	string color[] = { "Yellow", "Pink", "Blue", "Red" };	
  	disp(color[2]);  
  	return 0;
}
void disp(string myColor)
{
		cout << " Color is " << myColor << endl;
}
