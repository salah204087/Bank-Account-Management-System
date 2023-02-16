#include "Checking_Account.h"
#include"bankaccount.h"

void Checking_Account::withdraw(double _withdraw)
{
	if (_withdraw > balance)
	{
		service += 15;
		balance -= service;
	}
	else
	{
		balance -= _withdraw;
		num_of_with++;
	}
	
}

void Checking_Account::monthlyproc()
{
	service += (5 + num_of_with * 0.10);
	balance -= service;
}
