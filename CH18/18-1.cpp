#include <iostream>
using namespace std;
template <typename T>
void Swap(T &nA, T &nB)
{
	T temp;
	temp = nA;
	nA = nB;
	nB = temp;
}

int main()
{
	int iA = 108, iB = 1009;
	float fA = 2.50, fB = 4.60;
	char cA = 'm', cB= 'z';

    cout << " Before swap with function template. \n";
	cout << " integer1 = " << iA << "\t integer2 = " << iB;
	cout << " \n float1 = " << fA << "\t float2 = " << fB;
	cout << " \n char1 = " << cA << "\t char2 = " << cB;

	Swap(iA, iB);
	Swap(fA, fB);
	Swap(cA, cB);

   	cout << " \n\n After swap with to function template. \n";
	cout << " integer1 = " << iA << " integer2 = " << iB;
	cout << " \n float1 = " << fA << "\t float2 = " << fB;
	cout << " \n char1 = " << cA << "\t char2 = " << cB;
	return 0;
}
