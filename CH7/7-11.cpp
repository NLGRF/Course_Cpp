#include <iostream>
using namespace std;

int calSal(int wageDay = 300, int days = 30);

int main()
{
	int x = 350, y = 28, result;
    result = calSal();
    cout << " No argument passed, Salary = " << result << endl;
    result = calSal(x);
    cout << " First argument passed, Salary = " << result << endl;
    result = calSal(x, y);
    cout << " Both argument passed, Salary = " << result << endl;
    return 0;
}

int calSal(int wageHour, int days)
{
    int salary;
    salary = wageHour * days;
    return salary;
}
