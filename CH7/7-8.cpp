#include <iostream>
using namespace std;

float average(int arr[6]);
int main()
{
  	int num[6] = {20, 12, 15, 18, 22, 19};
	float ave;	
  	ave = average(num);
	cout << " Average value = " << ave << endl;
  	return 0;
}
float average(int arr[6])
{
	int i, sum = 0;       
  	float avg;          
   	for (i = 0; i <6; ++i) {
      sum += arr[i];
   }
   avg = float(sum) / 6;

   return avg;
}
