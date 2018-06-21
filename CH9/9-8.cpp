#include <iostream>
using namespace std;

class IntList
{
  private:
    int arr[10];
  public:
	 IntList()
	 {
  		for(int i = 0; i < 10; i++)
  		{
			arr[i] = i*i;
		}
   }
   int& operator[](const int index);
};
int& IntList::operator[](const int index)
{
	if(index > 10)
	{
     cout << "Index out of bounds" << endl;
    return arr[0];
	}else
    return arr[index];
	}

int main() {
  IntList A;

  cout << "Value of List[2] : " << A[2] << endl;
  cout << "Value of List[5] : " << A[5] << endl;
  cout << "Value of List[12] : " << A[12] << endl;
 
  return 0;
}
