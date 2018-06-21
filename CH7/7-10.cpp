#include <iostream>
using namespace std;

int * num();
int main () {
   int *ptr;
   ptr = num();  
   for ( int i = 0; i < 6; i++ ) {
      cout << "\n Return num [" << i << "] = ";
      cout << *(ptr+i);
   }
   return 0;
}

int * num( ) {
   	static int  num[6];
	for (int i = 0; i < 6; ++i) {
      num[i] = i+1;
      cout << " " << num[i];
   }
   return num;
}

