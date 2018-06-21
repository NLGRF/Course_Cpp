#include<iostream>
using namespace std;

template <class T>
T Max(T n1, T n2)
{
	if (n1 > n2)
 	  return n1;
	else
	  return n2;
}
int main()
{
	int i1, i2;
	float f1, f2;
	char c1, c2;


    cout << " Find max value of 2 integer numbers. "<< endl;
	cout << " Enter first integers : ";
	cin >> i1;
	cout << " Enter second integers : ";
	cin >>i2;
	cout << Max(i1, i2) <<" is maximun." << endl;

    cout << "\n Find max value of 2 floating numbers. "<< endl;
	cout << " Enter first floating : ";
	cin >> f1;
	cout << " Enter second floating : ";
	cin >>f2;
	cout << Max(f1, f2) <<" is maximun." << endl;

    cout << "\n Find the after of 2 ASCII values.  "<< endl;
 	cout << " Enter first characters : ";
	cin >> c1;
	cout << " Enter second characters : ";
	cin >>c2;
	cout << Max(c1, c2) << " has after ASCII value.";

	return 0;
}
