#include <iostream>
#include <string>
using namespace std;

class person
{
	public:
		void profile(int age);
		void profile(string email);
};

		void person::profile(int age) { 
        cout << " My age is " << age << endl;
      }
		void person::profile(string email) {
        cout << " My email address is " << email << endl;
      }
      
int main ()
{
	person peter;
	peter.profile(32);
	peter.profile("peter@mymail.com");
	return 0;	
}
