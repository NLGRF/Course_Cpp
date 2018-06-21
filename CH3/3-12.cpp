#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int price, down, principal, years, month;
	float annualInterestRate, monthlyInterest, monthlyPayment;
	
	cout << "Enter the purchase price of the car: ";
	cin >> price;
	cout << "Enter the amount of your down payment: ";
	cin >> down;
	principal = price - down;
	cout << "Your principal : " << principal << endl;
	cout << "Enter the number of years to pay off the car: ";
	cin >> years;
	month = years * 12;
	cout << "Enter the annual interest rate: ";
	cin >> annualInterestRate;
	monthlyInterest = annualInterestRate / (12*100);
	monthlyPayment = (principal*monthlyInterest*(pow(1 + monthlyInterest, month)))/((pow(1 + monthlyInterest, month))-1);
	cout << "Monthly payment : " << monthlyPayment << endl;
	return 0;
}
	
