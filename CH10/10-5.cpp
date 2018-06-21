#include <iostream>
using namespace std;
class fruit
{
	public:
	fruit()
	{
		cout << " This is fruit" << endl;
	}
};

class juice
{
	public:
	juice()
	{
		cout << " Juice of friut" << endl;
	}
};

class mango: public fruit
{

};

class orange: public fruit, public juice
{

};

int main()
{
	fruit obj1;
	cout << endl;
	orange obj2;
	return 0;
}
