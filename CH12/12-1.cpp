#include <iostream>
using namespace std;

class Exchange
{
	private:
		float USD;
	public:					
		float THB, D;
		Exchange()
		{
			USD = 34.48;
		}
	void ExchangeRate()
	{
		D = THB/USD;
	}
};
int main() {  
   Exchange change;
 	cout<<" Enter Baht Thai ";
	cin>>change.THB;
	change.ExchangeRate();
	cout<<" "<<change.THB
   <<" Baht Thai = " << change.D << " USD Dollar" << endl;
	return 0;
}
