#include <iostream>
#include <string>
using namespace std;

class Grade
{
		int num;
	public:
		Grade(int point);
		int getVar(void);
};

	Grade::Grade(int point=0):num(point){}
	int Grade::getVar(void) { return num;}
	
	int main ()
{
	Grade A;
	Grade B(80);
	cout << " Point of A : " << A.getVar() << endl;
	cout << " Point of B : " << B.getVar() << endl;
	return 0;	
}

