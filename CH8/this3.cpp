#include <iostream> 
using namespace std;

class data{
private:
	int x;
 
public:
	data(int x)
	{
		setVar(x);
	}

	void setVar(int x) { this->x = x; }
	int getVar() { return x; }
};

int main(void) {
		data myData(300);
		cout << myData.getVar() << endl;
		return 0;
}
