#include <iostream> 
using namespace std;

class rectangle
{
public:
	int area(int width, int height)
	{
		return width * height;
	}
};

int main(void) 
{
	rectangle rec;
	cout << " Area = " << rec.area(4,3) << endl; 
	return 0;	
}

