#include <iostream>
using namespace std;
int main() 
{
  int  sum = 0;
  int num[5] = {19, 10, 8, 17, 9};
  for (int i = 0; i < 5; ++i) 
  {
    cout <<" Array address : " << i << " value is : "<<num[i]<<endl; 
    sum += num[i];
  }
    cout << "\n";
    cout << "\t\t Sum value = " << sum << endl;  
    return 0;
}
