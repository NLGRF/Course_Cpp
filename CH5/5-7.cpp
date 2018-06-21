#include <iostream>
using namespace std;

int main ()
{
  int i = 0, sum =0;
 do
  {
    if(i > 5)
    {
     goto start;
 	}
	  sum += i;	
    start : cout <<" Value i = "<< i <<" Value sum  = "<< sum <<endl;
    i++;
  } while( i < 10 );
 return 0;
}
