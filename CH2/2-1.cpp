#include <iostream>
#include <limits>
using namespace std;


int main() 
{
 cout << "Size of char is " << sizeof(char) << endl;
 cout << "Size of int is " << sizeof(int) << endl;
 cout << "Size of float is " << sizeof(float) << endl;
 cout << "Size of short int is " << sizeof(short int) << endl;
 cout << "Size of long int is " << sizeof(long int) << endl;
 cout << "Size of double is " << sizeof(double) << endl;
 cout << "Size of long double is " << sizeof(long double) << endl;
 cout << "Size of wchar_t is " << sizeof(wchar_t) << endl;
 cout << "int min: " << numeric_limits<int>::min() << endl;
 cout << "long double max: " << numeric_limits<long double>::max() << endl;

 return 0;
}
