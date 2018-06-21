#include <iostream>
using namespace std;

template <class T>
class Calculator {
private:
	T num1, num2;
public:
	Calculator(T n1, T n2) {
		num1 = n1;
		num2 = n2;
	}

	T addition() { return num1 + num2; }
	T subtract() { return num1 - num2; }
	T multiply() { return num1 * num2; }
	T division() { return num1 / num2; }

	void displayResult()
	{
	     cout << "Numbers are: " << num1 << " and " << num2 << "." << endl;
	     cout << "Addition is: " << addition() << endl;
	     cout << "Subtraction is: " << subtract() << endl;
	     cout << "Multiply is: " << multiply() << endl;
	     cout << "Division is: " << division() << endl;
	}
	};

int main()
{
	Calculator<int> intCalc(5, 3);
	Calculator<float> floatCalc(3.4, 2.8);
	
	cout << "Int results:" << endl;
	intCalc.displayResult();

	cout << "\nFloat results:" << endl;
	floatCalc.displayResult();
	
	return 0;
}
