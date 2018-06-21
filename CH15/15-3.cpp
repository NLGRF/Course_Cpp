#include<iostream>
#include <exception>
using namespace std;

class ZeroDivisionExc : public exception
{
  public:
	 int myData;
	ZeroDivisionExc(int data)
	{
		myData = data;
	}
	const char* what()
	{
		return " Exception : Zero division";
	}
};
int divide_num(int x, int y)
{
	if(y == 0)
	    throw ZeroDivisionExc(x);
	else
   return x/y;
}
int main()
{
    int a, b;
    cout << " This program is division number" << endl;
    cout << " Enter Number one: ";
    cin >> a;
    cout << " Enter Number two: ";
    cin >> b;
    
  try
  {
    cout << " Divide " << a << " by " << b << " = " << divide_num(a, b);
  }
  catch (ZeroDivisionExc e)
  {								 
    cout << e.what() << endl;
	cout << " Error of Divide " << e.myData << " by zero" << endl;
  }

  return 0;
}
