#include <iostream>

using namespace std;

int main()
{
	int num, sum = 0;
	cout << " Enter the number of products in shop : ";
	cin >> num;
	int *amount = new int[num];
	for( int i = 0; i < num; i++ )       
	{
		cout << "\n Enter the amount sales of product : " << i+1 << " = ";
		cin >> *(amount+i);     
	}
	for( int i = 0; i < num; i++ )  
	{
		sum += *(amount+i);
	}
	cout << "\n Total sales is " << sum;
	delete[] amount;
	return 0;
}
