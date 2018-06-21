#include <iostream>
using namespace std;

int main ()
{
   int sum; 
   for (int i = 0; i < 10; i++)
	  {  
      if(i > 5) {
         break;
		}	
		 sum += i;
      cout <<" Value i  = " << i <<" Value sum  = " << sum <<endl;
    }
	return 0;  
}
