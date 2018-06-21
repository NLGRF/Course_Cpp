#include <iostream>

using namespace std;

class myclass
{
	 public:
       	myclass() { 
    	  cout << " Object created" << endl; 
      	}
       	~myclass() { 
    	   cout << " Object deleted" << endl; 
        }
};

int main()
{
	myclass *p = new myclass[3];
	delete [] p;
	return 0;
}
