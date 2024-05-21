#include "BankAccount.h"

void BankAccount::Init(){
	cout << "BankAccount INIT" << endl;
}

void BankAccount::Reset(){
	cout << "BankAccount RESET" << endl;
}

BankAccount::BankAccount(){
	Init();
	money = 0;
}

BankAccount::BankAccount(float starting_money){
	Init();
	money = starting_money;
}

BankAccount::BankAccount(BankAccount &X){
	Init();
	money = X.money;
}

BankAccount::~BankAccount(){
	Reset();
}

float BankAccount::CheckBalance(){
	return this->money;
}

void BankAccount::DepositMoney(float deposit_amount){
	if (deposit_amount > 0){
		this->money += deposit_amount;
		cout << "DepositMoney: deposit successful" << endl;		
	}
	else{
		cout << "DepositMoney: deposit amount "<< deposit_amount << "is negative\n" << endl;
	}
}

void BankAccount::WithdrawMoney(float withdraw_amount){
	if (this->money - withdraw_amount < 0){
		cout << "WithdrawMoney: Insufficient funds" << endl;
	}
	else{
		this->money -= withdraw_amount;
		cout << "WithdrawMoney: you've'successfully withdrawn " << withdraw_amount << " from your balance" << endl;		
	}
}

