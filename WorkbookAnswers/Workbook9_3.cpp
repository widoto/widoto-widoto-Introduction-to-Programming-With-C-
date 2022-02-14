#include <iostream> 
using namespace std;


class Account
{
public:
	int id;
	double balence;
	double annualInterestRate;

	Account()
	{
		id = 0;
		balence = 0;
		annualInterestRate = 0;
	}

	Account(int newId, double newBalence, double newAnnualInterestRate)
	{
		id = newId;
		balence = newBalence;
		annualInterestRate = newAnnualInterestRate;
	}

	//접근자와 변경자는 skip
	double getMonthlyInterestRate()
	{
		return id / 12.0;
	}

	double withDraw(double amount)
	{
		if (balence >= amount)
		{
			balence = balence - amount;
			return amount;
		}

		//else일때는 줄게 없다는 의미로 0
		else
			return 0;
	}

	double deposit(double amount)
	{
		balence = balence + amount;
		return balence + amount;
	}
};
int main()
{
	Account account1(1122, 20000, 4.5);


	cout << "previous balence is " << account1.balence << endl;
	cout << "The withdraw amount is " << account1.withDraw(2500) << endl;
	cout << "The deposit amount is " << account1.deposit(3000) << endl;
	cout << "after balence is " << account1.balence;



}