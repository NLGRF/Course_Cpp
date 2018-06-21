#include <iostream>
using namespace std;
int main () 
{
 	int num=100;    
	int *ptr1;			// Pointer for num
	int **ptr2;			// pointer to pointer for ptr1
     ptr1 = &num;		// storing address of num into ptr1 
	 ptr2 = &ptr1;		// storing address of pointer ptr1 into pointer ptr2
	// Find value of variable num
     cout << "\n Value of num is: " << num;
     cout << "\n Value of num using ptr1 is: " << *ptr1;
     cout << "\n Value of num using ptr2 is: " << **ptr2;
	// find address of num
     cout << "\n Address of num is: " << &num;
     cout << "\n Address of num using ptr1 is: " << ptr1;
     cout << "\n Address of num using ptr2 is: " << *ptr2;
    // Find value of pointer
     cout << "\n Value of Pointer ptr1 is: " << ptr1;
     cout << "\n Value of Pointer ptr1 using ptr2 is: " << *ptr2;
    // find address of pointer
     cout << "\n Address of Pointer ptr1 is: " << &ptr1;
     cout << "\n Address of Pointer ptr1 using ptr2 is: " << *ptr2;
    // pointer to pointer value and address
     cout << "\n Value of Pointer ptr2 is: " << ptr2;
     cout << "\n Address of Pointer ptr2 is " << &ptr2;
     return 0;
}
