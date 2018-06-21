#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

int main ()
{
char str[] = "String and character function";
int n,len ;
char c;
len = strlen(str);
cout << " String after using function toupper is : ";
for ( n = 0 ; n < len ; n++){
   c = str[n];
  	putchar(toupper(c));
  }
  return 0;
}
