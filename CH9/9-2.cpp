#include <iostream>
using namespace std;
class temp
{
   private:
      float t;
   public:
      temp(float a) {
       	t = a;
       }
		void disp() {
			cout << " Temperature : " << t << " celsius" << endl;
		}
  	 	temp operator- (){
 			t = -t;
         	return temp(t);
       }
};
int main ()
{
	temp mon(4);
	-mon;
	mon.disp();	
	return 0;
}
