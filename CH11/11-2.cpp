#include <iostream>  
using namespace std;  
class mom
{  	
	public:
	void print()
	{
		cout << "This is method of class mom" << endl;
	}
};  
class child : public mom
{ 
public:
	void print()
	{
		cout << "This is method of class child" << endl;
	}
}; 
int main(void) 
{  
	mom *prtA;
	mom A;
	prtA = &A;
	prtA->print();	
	mom B;
	prtA = &B;
	prtA->print();			
	return 0;
}
