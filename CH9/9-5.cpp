#include <iostream>
using namespace std;
class Time
{
	private:
	  int HH, mm, ss;
	public:
	  Time()
	  {
			HH = mm = ss = 0;
	  }
	  Time(int h, int m, int s)
    {
		HH = h;
		mm = m;
		ss = s;
	  }
	void displayTime()
	{
		cout << " HH : mm : ss "<<HH<<" : "<<mm<<" : "<<ss<<endl;
	}
  Time operator++ ()
  {
     ++ss;
	  
    if(ss >= 60)
	  {
 		++mm;
 		ss -= 60;
	  }
	  if(mm >= 60)
	  {
 		++HH;
 		mm -= 60;
	  }
	  if(HH >= 12)
	  {
 		HH -= 12;
	  }
   return Time(HH, mm, ss);
  }
};
int main()
{

  Time T1(11, 59, 59), T2(10, 30, 59), T3(9, 59, 29);
	++T1;
	T1.displayTime();
	++T2;
	T2.displayTime();
	++T3;
	T3.displayTime();
	return 0;
}
