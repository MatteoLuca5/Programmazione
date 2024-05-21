#ifndef BANK_H
#define BANK_H
#endif

#include <iostream>

using namespace std;

class BankAccount{
	private:
		float money;
	public:
		BankAccount();
		BankAccount(float starting_money);
		BankAccount(BankAccount &X);
		~BankAccount();
		void Init();
		void Reset();
		void DepositMoney(float deposit_amount);
		void WithdrawMoney(float withdraw_amount);
		float CheckBalance();
};
