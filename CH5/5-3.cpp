#include <iostream>
using namespace std;
int main ()
{
	int i,ans, num;
	cout << "*** Multiplication Table Program ***"<< endl;
	cout << "Enter a positive number : ";
	cin >> num;
	for(i=1; i <=12; i++)
	{ 
		ans = num * i;
       	cout << num << " x " << i << " = " << ans << endl;
    }
 return 0;
}
