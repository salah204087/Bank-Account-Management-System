#include<iostream>
#include"bankaccount.h"
#include "accountowner.h"
#include "Checking_Account.h"
#include "savingaccount.h"
#include<limits>
using namespace std;
int bankaccount::num_of_dep = 0;
int bankaccount::num_of_with = 0;
double bankaccount::service = 0;
double bankaccount::balance = 0;
double bankaccount::annual = 0;
int main()
{
	int n,choice,k,j=0,id,g=0;
	double balance,annual,deposit,withdraw,searching=0;
	string fname, lname, h,b,phone;
	AccountOwner users[30];
	savingaccount save[30];
	Checking_Account check[30];
	cout << "Enter number of users: " << endl;
	do {
		cin >> n;
		if (n < 0 || cin.fail()) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "You enterd invalid input please enter correct input!" << endl;
		}
		else
			break;
	} while (true);
	users[n];
	save[n];
	check[n];
	for (int i = 0; i < n; i++) {
		cout << "Enter first name of user " << i + 1 << ": " << endl;
		cin >> fname;
		users[i].setFirst_Name(fname);
		cout << "Enter last name of user " << i + 1 << ": " << endl;
		cin >> lname;
		users[i].setLast_Name(lname);
		cout << "Enter phone of user " << i + 1 << ": " << endl;
		cin >> phone;
		users[i].setPhone_Number(phone);
		users[i].setnational_id(i + 1);
		cout << "The national id of user " << i + 1 << " is " << users[i].getnational_id() << endl;
	}
	do {
		do {
			searching = 0;
			cout << "Enter user id: " << endl;
			do {
				cin >> id;
				if (id < 0 || cin.fail()) {
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
					cout << "You enterd invalid input please enter correct input!" << endl;
				}
				else
					break;
			} while (true);
			for (int i = 0; i < n; i++) {
				if (users[i].getnational_id() == id) {
					searching++;
					break;
				}
				else
					continue;
			}
			if (searching == 0)
				cout << "You entered invalid id! \n  please enter valid id!" << endl;
			else
				break;
		} while (true);

	do{
		cout << "Choose bank account type: (1-saving,2-checking)" << endl;
		cin >> k;
			switch (k) {
			case 1:
				save[j].set_accountowner(users[id - 1]);
				cout << "Enter initial balance: " << endl;
				do {
					cin >> balance;
					if (balance < 0 || cin.fail()) {
						cin.clear();
						cin.ignore(numeric_limits<streamsize>::max(), '\n');
						cout << "You enterd invalid input please enter correct input!" << endl;
					}
					else
						break;
				} while (true);
				save[j].set_balance(balance);
				cout << "Enter annual interest rate: " << endl;
				do {
					cin >> annual;
					if (annual < 0 || cin.fail()|| annual>1) {
						cin.clear();
						cin.ignore(numeric_limits<streamsize>::max(), '\n');
						cout << "You enterd invalid input please enter correct input!" << endl;
					}
					else
						break;
				} while (true);
				save[j].set_annual(annual);
				j++;
				break;
			case 2:
				check[g].set_accountowner(users[id - 1]);
				cout << "Enter initial balance: " << endl;
				do {
					cin >> balance;
					if (balance < 0 || cin.fail()) {
						cin.clear();
						cin.ignore(numeric_limits<streamsize>::max(), '\n');
						cout << "You enterd invalid input please enter correct input!" << endl;
					}
					else
						break;
				} while (true);
				check[g].set_balance(balance);
				cout << "Enter annual interest rate: " << endl;
				do {
					cin >> annual;
					if (annual < 0 || cin.fail() || annual>1) {
						cin.clear();
						cin.ignore(numeric_limits<streamsize>::max(), '\n');
						cout << "You enterd invalid input please enter correct input!" << endl;
					}
					else
						break;
				} while (true);
				check[g].set_annual(annual);
				g++;
				break;
			default:
				cout << "You entered invalid input! \n please enter valid input! " << endl;

			}
			if (k == 1 || k == 2)
				break;

	} while (true );
	do {
		cout << "1-Show balance \n 2-Deposit \n 3-Withdraw \n 4-Apply monthly fees and interest \n 5-Display monthly statistics \n 6-creating new account \n 0-Done" << endl;
		do {
			cin >> choice;
			if (choice < 0 || cin.fail() ) {
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cout << "You enterd invalid input please enter correct input!" << endl;
			}
			else
				break;
		} while (true);
		switch (choice) {
		case 1:
			if (k == 1)
				cout << "Your balance is " << save[j].get_balance() << endl;
			else
				cout << "Your balance is " << check[g].get_balance() << endl;
			do {
				cout << "Press b if you want to go back!" << endl;
				cin >> b;
				if (b == "b" || b == "B")
					break;
				else
					cout<<"You entered invalid input press enter valid input!"<<endl;
			} while (true);
			break;
	    case 2:
			cout << "Enter the amount of cash you want to deposit: " << endl;
			do {
				cin >> deposit;
				if (deposit < 0 || cin.fail()) {
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
					cout << "You enterd invalid input please enter correct input!" << endl;
				}
				else
					break;
			} while (true);
			if (k == 1)
				save[j].deposit(deposit);
			else
				check[g].deposit(deposit);
			do {
				cout << "Press b if you want to go back!" << endl;
				cin >> b;
				if (b == "b" || b == "B")
					break;
				else
					cout << "You entered invalid input press enter valid input!" << endl;
			} while (true);
			break;
		case 3: 
			cout << "Enter the amount of money you want to withdraw: " << endl;
			do {
				do {
					cin >> withdraw;
					if (withdraw < 0 || cin.fail()) {
						cin.clear();
						cin.ignore(numeric_limits<streamsize>::max(), '\n');
						cout << "You enterd invalid input please enter correct input!" << endl;
					}
					else
						break;
				} while (true);
				if (k == 1)
					searching = save[j].get_balance();
				else
					searching = check[g].get_balance();
				if (withdraw > searching)
					cout << "You can`t withdraw you balance is less than the amount of withdrawl! " << endl;
				else
					break;

			} while (withdraw > searching);
			if (k == 1)
				save[j].withdraw(withdraw);
			else
				check[g].withdraw(withdraw);
			do {
				cout << "Press b if you want to go back!" << endl;
				cin >> b;
				if (b == "b" || b == "B")
					break;
				else
					cout << "You entered invalid input press enter valid input!" << endl;
			} while (true);
			break;
		case 4:
			if (k == 1)
				save[j].monthlyproc();
			else
				check[g].monthlyproc();
			cout << "Monthly fees and interest has applied!" << endl;
			do {
				cout << "Press b if you want to go back!" << endl;
				cin >> b;
				if (b == "b" || b == "B")
					break;
				else
					cout << "You entered invalid input press enter valid input!" << endl;
			} while (true);
			break;
		case 5:
			if (k == 1)
			{
				cout << "Your balance is " << save[j].get_balance() << endl;
				cout << "Your annual rate " << save[j].get_annual() << endl;
				cout << "Num of deposits is " << save[j].get_num_of_dep() << endl;
				cout << "Num of withdraws is " << save[j].get_num_of_with()<<endl;
				cout << "Monthly service charges is  " << save[j].get_service()<<endl;
				if (save[j].getstatus() == true)
					cout << "The account is active." << endl;
				else
					cout << "The account is inactive." << endl;
			}
			else
			{
				cout << "Your balance is " << check[g].get_balance() << endl;
				cout << "Your annual rate " << check[g].get_annual() << endl;
				cout << "Num of deposits is " << check[g].get_num_of_dep() << endl;
				cout << "Num of withdraws is " << check[g].get_num_of_with() << endl;
				cout << "Monthly service charges is  " << check[g].get_service() << endl;
			}
			do {
				cout << "Press b if you want to go back!" << endl;
				cin >> b;
				if (b == "b" || b == "B")
					break;
				else
					cout << "You entered invalid input press enter valid input!" << endl;
			} while (true);
			break;
		case 6:
			break;
		case 0:
			break;
		default:
			cout << "you entered invalid input please enter valid input!" << endl;
			}
		if (choice == 6 || choice == 0)
			break;
	} while (true);
	
	} while (choice!=0);
	cout << "the program has ended !" << endl;
}