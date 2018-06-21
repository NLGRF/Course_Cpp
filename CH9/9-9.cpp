#include <iostream>  
using namespace std;  
  
class Size{
   int S, M, L;
  public:
   Size(int x, int y,int z){
      S = x;
      M = y;
      L = z;
   }
   void DisplaySize(){
      cout << " Size S : "<< S <<" Size M : "<< M 
           <<" Size L : "<< L << endl;
   }
   Size *operator->()	{
      return this;
  }
};
int main()
{
   Size sizeShot(36, 38, 40);

   sizeShot.DisplaySize();
   sizeShot->DisplaySize();

  return 0;
}
