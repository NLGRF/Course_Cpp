#include<iostream>
using namespace std;
int divide_numbers(int x, int y)
{
	if(y == 0)
   {							
	  throw "Division by zero not allowed";
   }
   return x/y;
}

int main()
{
    int a, b;
    cout << "Numerical division program please enter 2 numbers \n";
    cout << "Number one: ";		
    cin >> a;
    cout << "Number two: ";
    cin >> b;
    
 try
 {
   cout << a << " Div " << b << " is : " << divide_numbers(a, b);
 }
 catch(const char* msg)
 {
   cerr << msg << endl;
 }
  return 0;
}
