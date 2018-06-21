#include <iostream>
using namespace std;

class mother
{
public:
	mother()
	{
		cout << "We have 5 acres of land." << endl;
	}
};
class son: public mother
{ public:
	son()
	{
		cout<<"We have 2 houses"<<endl;
	}
};
// sub class derived from two base classes
class grandchild : public son
{ public:
	grandchild ()
	{
		cout<<"We have 2 cars"<<endl;
	}
};

// main function
int main()
{
	//creating object of sub class will
	//invoke the constructor of base classes
	grandchild  me;
	return 0;
}
