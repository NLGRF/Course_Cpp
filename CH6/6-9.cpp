#include <iostream>
using namespace std;
int main() 
{
   int num = 10; 
   int *ptr;
   ptr = &num;
   cout << " Address num is \t" << ptr << " Value is " << *ptr << endl;
   cout << " Next Address is \t" << ++ptr << endl;
   cout << " Next Address is \t" << ++ptr << endl;
   cout << " Address + 2 is \t" << ptr+2 << endl;
   cout << " Address of ptr is \t" << ptr << endl;
   cout << " Address - 2 is \t" << ptr-2 << endl;
   cout << " Previous Address is \t" << --ptr << endl;  
   return 0;
}
