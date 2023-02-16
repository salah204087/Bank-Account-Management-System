#pragma once
#ifndef Checking_Account_H
#define Checking_Account_H
#include "bankaccount.h"
class Checking_Account:public bankaccount
{
public:
	void withdraw(double _withdraw);
	void monthlyproc();
};
#endif
