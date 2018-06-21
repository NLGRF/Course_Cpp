#include <iostream>
using namespace std;
class father {
	public:
	father()
	{
		cout << "We have 5 acres of land." << endl;
	}
};

class mother {
	public:
	mother()
	{
		cout << "We have 2 houses" << endl;
	}
	
};

class son: public father, public mother {
};
int main()
{
	son me;
	return 0;
}
