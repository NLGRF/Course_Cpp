#include <iostream>

using namespace std;

int main()
{
	int score;

	cout << "Enter the number of your score : "; 
	cin >> score;
	
	if (score >= 80 && score <= 100)
	{
		cout << "Grade is  A ";
	}	
	else if (score >= 70 && score <= 79)
	{
		cout <<  "Grade is  B ";
	}
	else if (score >= 60 && score <= 69)
	{
		cout << "Grade is  C ";
	}	
	else if (score >= 50 && score <= 59)
	{
		cout << "Grade is  D ";
	}
	else if (score < 50 && score >= 0)
	{
		cout << "Grade is  F ";
	}
	else
	{
		cout << "Wrong score";
	}
	return 0;
}
	
