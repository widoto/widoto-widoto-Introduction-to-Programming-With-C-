#include "Loan.h"
#include <cmath>
using namespace std;

Loan::Loan() {
	annalInterestRate = 9.5;
	numberOfYears = 30;
}

Loan::Loan(double rate, int years, double amount) {
	annalInterestRate = rate;
	numberOfYears = years;
	loanAmount = amount;
}

Loan::double getAnnualInterestRate() {
	return annualInterestRate;
}
Loan::int getNumberOfYears() {
	return numberOfYears;
}
Loan::double detLoanAmount() {
	return loanAmount;
}
Loan::void setAnnualInterestRate(double rate) {
	annualInterestRate = rate;
}
Loan::void setNumberOfYears(int years)
{
	return numberOfYears = years;
}
Loan::void setLoanAmount(double amount) {
	return loanAmount = amount;
}
Loan::double getMonthlyPayment() {
	double monthlyInterestRate = annualIterestRate / 1200;
	return loanAmount * monthlyInterestRate / (1 - (pow(1 / (1 + monthlyInterestRate), numberOfYears * 12)));
}
Loan::double getTotalPayment() {
	return getMonthlyPayment()*numberOfYears * 12;
}