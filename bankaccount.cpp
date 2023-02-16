#include "bankaccount.h"
#include <iostream>
#include"accountowner.h"
using namespace std;

bankaccount::bankaccount()
{
	balance = 0;
	annual = 0;
}

bankaccount::bankaccount(double _balance, double _annual,AccountOwner _account)
{
	balance = _balance;
	annual = _annual;
	account = _account;
}
void bankaccount::set_accountowner(AccountOwner _account)
{
	account = _account;
}
AccountOwner bankaccount::get_accountowner()
{
	return account;
}
void bankaccount::set_balance(double _balance)
{
	balance = _balance;
}
void bankaccount::set_annual(double _annual)
{
	annual = _annual;
}
double bankaccount::get_annual()
{
	return annual;
}
double bankaccount::get_balance()
{
	return balance;
}
double bankaccount::get_service()
{
	return service;
}
void bankaccount::deposit(double _deposit)
{
	balance += _deposit;
	num_of_dep++;
}
void bankaccount::withdraw(double _withdraw)
{
		balance -= _withdraw;
		num_of_with++;
	
}
int bankaccount::get_num_of_dep()
{
	return num_of_dep;
}

int bankaccount::get_num_of_with()
{
	return num_of_with;
}

void bankaccount::calclnt()
{
	balance += balance * (annual / 12);
}

void bankaccount::monthlyProc()
{
	balance -= service;
	calclnt();
	num_of_dep = 0;
	num_of_with = 0;
	service = 0;
}
