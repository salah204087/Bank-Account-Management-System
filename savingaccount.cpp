#include "savingaccount.h"
#include"bankaccount.h"
#include <iostream>
#include <string>
using namespace std;

savingaccount::savingaccount()
{
	status = false;
}

savingaccount::savingaccount(double _balance, double _annual,AccountOwner _account, bool _status):bankaccount(_balance,_annual,_account)
{
	status = _status;
}

void savingaccount::deposit(double _deposit)
{
		balance += _deposit;
		num_of_dep++;
		if (balance > 25)
			status = true;
		else
			status = false;
}

void savingaccount::withdraw(double _withdraw)
{
	if (balance < 25)
	{
		status = false;
		cout << "Your balance is less than 25$ so you can`t withdraw!" << endl;
	}
	else
	{
		balance -= _withdraw;
		num_of_with++;
	}

}

void savingaccount::monthlyproc()
{
	if (num_of_with > 4) {
		service=num_of_with-4;
		balance -= service;	
}
	if (balance < 25)
		status = false;
	else
		status = true;
}

bool savingaccount::getstatus()
{
	return status;
}

