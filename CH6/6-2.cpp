#include <iostream>
using namespace std;
int main() 
{
	int arr2D[3][5], num;

  for (int i = 0; i < 3; i++){
	 for (int j = 0; j < 5; j++)
	 {
	 	num +=1;
		arr2D[i][j] = num;
  	}
}
  for (int i = 0; i < 3; i++)
	{
	 for (int j = 0; j < 5; j++){
		cout <<"\t"<< arr2D[i][j];
  }   		
  	cout << endl;
  }
  return 0;
}
