#include <iostream>

using namespace std;

int main()
{
	int point, num;

	cout << "Enter the number of point : ";
	cin >> point;
	num = point/10;

	switch (num)
	{
		case 10: 
		case 9:
		case 8:
			cout << "Your grade is A"; 
		break;
		case 7:
			cout << "Your grade is B"; 
		break;
		case 6:
			cout << "Your grade is C"; 
		break;
		case 5:
			cout << "Your grade is D"; 
		break;
		default : cout << "Your grade is F"; 
	}
	return 0;
}
	
