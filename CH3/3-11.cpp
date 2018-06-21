#include <iostream>

using namespace std;

int main()
{
	float principal, rate, time, interest;

	cout << "Enter the number of the principal : ";
	cin >> principal;
	cout << "Enter the rate of interest : ";
	cin >> rate;
	cout << "Enter the time period (years) : ";
	cin >> time;
	interest = (principal*rate*time)/100.0;
	cout << "The interest is : " << interest << endl;
	return 0;
}
	
