#include <iostream>
#include <ctime>
using namespace std;



int main()
{
	//���� ������ �Է�
	cout << "Enter yearly interest rate,for example 8.25: ";
	double annualInterestRate;
	cin >> annualInterestRate;

	//�� ������ ���
	double monthlyInterestRate = annualInterestRate / 1200;
	//1200������ �� �߿�

	//���⿬�� �Է�
	cout << "Enter number of years as an integer, for example 5: ";
	int numberOfYears;
	cin >> numberOfYears;

	//����� �Է�
	cout << "Enter loan amount, for example 120000.95: ";
	double loanAmount;
	cin >> loanAmount;

	double monthlyPayment = loanAmount * monthlyInterestRate / (1 - 1 / pow(1 + monthlyInterestRate, numberOfYears * 12));
	double totalPayment = monthlyPayment * numberOfYears * 12;

	monthlyPayment = static_cast<int>(monthlyPayment * 100) / 100.0;
	totalPayment = static_cast<int>(totalPayment * 100) / 100.0;

	//��� ȭ�� ���
	cout << "The monthly payment is " << monthlyPayment << endl << "The total payment is" << totalpayment << endl;



	return 0;
}