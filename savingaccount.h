#pragma once
#ifndef savingaccount_H
#define savingaccount_H
#include<string>
#include"bankaccount.h"
#include"accountowner.h"
class savingaccount : public bankaccount
{
private:
	bool  status;
public:
	savingaccount();
	savingaccount(double _balance, double _annual, AccountOwner _account, bool _status);
	void deposit(double _deposit);
	void withdraw(double _withdraw);
	void monthlyproc();
	bool getstatus();

};
#endif
