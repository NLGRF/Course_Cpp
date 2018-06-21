#include <iostream>

using namespace std;

int main()
{
	int score;

	cout << "Enter the number of your score : "; 
	cin >> score;
	
	if (score>=50)
	{
		cout << "You passed!" << endl;
	}	
	else {
		cout << "You failed!" << endl;
	}	
	return 0;
}
	
