#include <iostream>
#include <ctime>
using namespace std;



int main()
{
	//연간 이자율 입력
	cout << "Enter yearly interest rate,for example 8.25: ";
	double annualInterestRate;
	cin >> annualInterestRate;

	//월 이자율 계산
	double monthlyInterestRate = annualInterestRate / 1200;
	//1200나누는 것 중요

	//대출연수 입력
	cout << "Enter number of years as an integer, for example 5: ";
	int numberOfYears;
	cin >> numberOfYears;

	//대출금 입력
	cout << "Enter loan amount, for example 120000.95: ";
	double loanAmount;
	cin >> loanAmount;

	double monthlyPayment = loanAmount * monthlyInterestRate / (1 - 1 / pow(1 + monthlyInterestRate, numberOfYears * 12));
	double totalPayment = monthlyPayment * numberOfYears * 12;

	monthlyPayment = static_cast<int>(monthlyPayment * 100) / 100.0;
	totalPayment = static_cast<int>(totalPayment * 100) / 100.0;

	//결과 화면 출력
	cout << "The monthly payment is " << monthlyPayment << endl << "The total payment is" << totalpayment << endl;



	return 0;
}