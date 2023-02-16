#pragma once
#ifndef bankaccount_H
#define bankaccount_H
#include "accountowner.h"
#include<iostream>
using namespace std;
class bankaccount
{
protected:
	AccountOwner account;
	 static double balance;
	static int num_of_dep;
	static int num_of_with;
	 static double annual;
	static double service;
public:
	bankaccount();
	bankaccount(double _balance, double _annual,AccountOwner _account);
	void set_accountowner(AccountOwner _account);
	AccountOwner get_accountowner();
	void set_balance(double _balance);
	void set_annual(double _annual);
	double get_annual();
	double get_balance();
	double get_service();
	virtual void deposit(double _deposit);
	virtual void withdraw(double _withdraw);
	int get_num_of_dep();
	int get_num_of_with();
	virtual void calclnt();
	virtual void monthlyProc();

};
#endif