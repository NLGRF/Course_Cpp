#include <iostream>
 
using namespace std;

class idNum{
private:
	int MYid;
 
public:
	idNum(int id)
	{
	setID(id);
	}
	void setID(int id) { MYid = id; }
	int getID() { return MYid; }
};

int main(void) {
		idNum newID(111);
		newID.setID(112);
		cout << newID.getID() << endl;
		return 0;	
}
