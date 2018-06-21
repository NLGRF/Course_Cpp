#include <iostream>
#include <string>
using namespace std;
int main() 
{    							     
  	string str1 = "String Class";
  	string str2 = " in C++";
  	string str3;
  	int len;
	str3 = str1+str2;
  	cout << "str3 is :          " << str3 << endl;
  	cout << "length of string : " << str3.length() << endl;
  	return 0;
}
