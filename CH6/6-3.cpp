#include <iostream>
using namespace std;
int main()
{ 
  int arr3D[2][3][4], num;
 for (int i = 0; i < 2; ++i)
 {     
	for (int j = 0; j < 3; ++j)
	{
	  	for (int k = 0; k < 4; ++k)
		{
	  	num +=1;
		arr3D[i][j][k] = num; 
		}
	}
 }	
 for (int i = 0; i < 2; ++i)
 {
	 for (int j = 0; j < 3; ++j) 
	 {
	  	for (int k = 0; k < 4; ++k)
		{
		cout << "\t" << arr3D[i][j][k];
	 	} cout << endl;
	 } cout << endl;
  }
  return 0;
}
