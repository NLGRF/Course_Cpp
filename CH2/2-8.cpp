#include <iostream>
#include <iomanip> 
using namespace std;

int main()
{
	int decNum = 123;
	int octNum = 0123;
	int hexNum = 0xFF;
	cout << "DEC " << decNum << endl;
	cout << setbase(8) << "OCT " << octNum << endl;
	cout << setbase(16) << "HEX " << hexNum << endl;
	return 0;
}
