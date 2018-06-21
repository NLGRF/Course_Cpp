#include <iostream>
using namespace std;

int main ()
{
   int i = 0, sum = 0;
  while ( i < 10)
  {
	  if(i == 5)
    {
		i++; 
      continue;
	   }	
     sum += i;
     cout << " Value i  = " << i << " Value  sum  = " << sum << endl; 
     i++;
  }
  return 0;
}
