#include <iostream>
using namespace std;
int main ()
{
	int i = 0;
	do
	{
 	  i++;
    if(i % 2==0)
    {
       cout << i << " is Even number "<< endl;
    }
    else
    {
       cout << i << " is Odd number "<< endl;
   }
   } while (i < 10 );
 return 0;
}
