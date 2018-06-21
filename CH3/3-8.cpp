#include <iostream>
using namespace std;
main()
{
	int x = 9; x += 3;  						
	cout <<" x = 9, Value of  x += 3 \t is : " << x << endl;

	x = 9; x -= 3;
	cout << " x = 9, Value of  x -= 3 \t is : " << x << endl;
	
	x = 9; x *= 3;
	cout << " x = 9, Value of  x *= 3 \t is : " << x << endl;

	x = 9; x /= 3;
	cout << " x = 9, Value of  x /= 3 \t is : " << x << endl;

	x = 9; x %= 4;
	cout << " x = 9, Value of  x %= 4 \t is : " << x << endl;

	x = 9; x &= 15;
	cout << " x = 9, Value of  x &= 15 \t is : " << x << endl;
	
	x = 9; x |= 15;
	cout << " x = 9, Value of  x |= 15 \t is : " << x << endl;

	x = 9; x ^= 15;
	cout << " x = 9, Value of  x ^= 15 \t is : " << x << endl;

	x = 9; x <<= 2;
	cout << " x = 9, Value of  y <<= 2 \t is : " << x << endl;
	
	x = 9; x >>= 3;
	cout << " x = 9, Value of  x =>> 3 \t is : " << x << endl;
	return 0;
}
