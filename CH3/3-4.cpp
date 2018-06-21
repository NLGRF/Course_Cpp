#include <iostream>
using namespace std;
int main()
{
	int A = 3, B=-2, C;
	cout << "A = "<< A << ", B = " <<B << endl;
	C = ++A + 3 * -B - 5;	
	cout << "++A + 3 * -B - 5 = \t" << C << endl;
	C = 8 + 12 * 2 - 4;
	cout << "8 + 12 * 2 - 4 = \t" << C << endl;
	C = (6 - 3) * (2 + 7) / 3;
	cout << "(6-3)*(2 + 7)/3 = \t" << C << endl;
return 0;
}
