#include <iostream>
using namespace std;

int main ()
{
   int i, j, x = 0, y = 0;
   for (i=1; i <= 10; i++)
   {
     for (j=1; j <= 10; j++)
     {
       y = x+j;
	  	 cout <<y << "\t";
     }
     x = y ;						  
     cout << endl;
   }
     return 0;   
}
