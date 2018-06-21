#include <iostream>
using namespace std;
main()
{
	unsigned int bin1 = 45; 		// 45 = 00101101
	unsigned int bin2 = 20; 		// 20 = 00010100
	int result = 0;

		cout << " bin1 = "<<bin1 << ", bin2 = "<<bin2<< endl;
		result = bin1 & bin2; 		// 4 = 0000 0100
		cout << " bin1 & bin2  is : " << result << endl;

		result = bin1 | bin2;		// 61 = 00111101
		cout << " bin1 | bin2  is : " << result << endl;

		result = bin1 ^ bin2; 		// 57 = 00111001
		cout << " bin1 ^ bin2  is : " << result << endl;

		result = ~bin1;			// -46 = 11010010
		cout << " ~bin1  is : " << result << endl;

		result = bin1 >> 2; 		// 11 = 00001011
		cout << " bin1 >> 2  is : " << result << endl;
 
		result = bin2 << 3;		// 160 = 10110100
		cout << " bin2 << 3  is : " << result << endl;
	return 0;
}
