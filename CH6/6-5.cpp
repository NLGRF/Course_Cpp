#include <iostream>      
#include <cstring>
using namespace std;
int main() 
{
   	char str[10];
   	char str1[] = "Hello"; 
   	char str2[] = " World"; 
   	char str3[] = "Hello World";
   	char str4[] = "lo W";
   	int length;
   	char ch = 'o';
  	cout << "strcpy(str,str1) is : "<< strcpy(str,str1) << endl;
   	cout << "strcmp(str,str1) is : "<< strcmp(str,str1) << endl;
   	cout << "strcat(str1,str2) is : "<< strcat(str1,str2) << endl;
   	cout << "lenghth of str1 is : "<< strlen(str1) << endl;
   	cout << "strchr(str3,ch) is : "<< strchr(str3,ch) << endl;
   	cout << "strstr(str3,str2) is : "<< strstr(str3,str4) << endl;  
	return 0;
}
