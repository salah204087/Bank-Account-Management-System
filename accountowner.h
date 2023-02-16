#ifndef ACCOUNTOWNER_H
#define ACCOUNTOWNER_H
#include <iostream>
#include <string>

using namespace std;

class AccountOwner
{
private:
    int national_id;
    string first_name;
    string last_name;
    string phone_number;
public:
    int getnational_id();
    void setnational_id(int _national_id);
    AccountOwner();
    AccountOwner(string fn, string ln, string pn);
    void setFirst_Name(string fname);
    string getFisrt_Name();
    void setLast_Name(string lname);
    string getLast_Name();
    void setPhone_Number(string phone);
     string getPhone_Number();
};

#endif

