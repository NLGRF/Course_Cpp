 #include <iostream>
using namespace std;
int main() 
{
  int arr[5] = {19, 10, 8, 17, 9};
  int *p_arr;
  p_arr  = arr;	
   for(int i = 0; i < 5; ++i){                   
     cout<<" Pointer address : "<<p_arr
	 <<" Value is : "<<*p_arr<<endl; 
     p_arr++;
    }
  return 0;
}
