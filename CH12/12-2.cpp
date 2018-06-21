#include <iostream>
using namespace std;
class Exchange
{
	private:
		float USD;
	public:
		float THB;
		Exchange()
      {
		  USD = 34.48;
		} 
		setRate(float Dollar)
      {	
        if(Dollar >= 34.00 && Dollar <= 36.00)
		  	USD = Dollar;
		  else

		  	cout<<" The Exchange rate entered is not between 34.00 - 36.00 Baht/Dollar, \n Will use exchange rate : 34.48"<< endl;
	    }
		float ExchangeDO()
		{
			return THB/USD;
	}
};
int main() {  
   Exchange change;	
   float DL;
    
	cout<<" Enter Baht Thai ";
	cin>>change.THB;
	
	cout<<" Enter exchange rate Dollar ";
	cin>>DL;
	
	change.setRate(DL);
	
	cout << " " << change.THB << " Baht Thai = "
         << change.ExchangeDO() << " USD Dollar"<< endl;
	
	return 0;
}
