#include "BankAccount.h"

#include <iostream>
using namespace std;

int main(){
	BankAccount A(1000);
	
	A.DepositMoney(1260);
	
	A.WithdrawMoney(2250);
	
	cout << A.CheckBalance() << endl;
	
}
