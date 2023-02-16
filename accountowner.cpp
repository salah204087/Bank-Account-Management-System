#include "accountowner.h"
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int AccountOwner::getnational_id()
{
    return national_id;
}

void AccountOwner::setnational_id(int _national_id)
{
    national_id = _national_id;
}

AccountOwner::AccountOwner()
{
    first_name = "unknown";
    last_name = "unknown";
    phone_number = "0";
    national_id++;
}
AccountOwner::AccountOwner(string fn, string ln, string pn)
{
    first_name = fn;
    last_name = ln;
    phone_number = pn;
}
void AccountOwner::setFirst_Name(string fname)
{
    first_name = fname;
}
string AccountOwner::getFisrt_Name()
{
    return first_name;
}
void AccountOwner::setLast_Name(string lname)
{
    last_name = lname;
}
string AccountOwner::getLast_Name()
{
    return last_name;
}
void AccountOwner::setPhone_Number(string phone)
{
    phone_number = phone;
}
string AccountOwner::getPhone_Number()
{
    return phone_number;
}