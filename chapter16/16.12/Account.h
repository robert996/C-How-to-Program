#pragma once
class Account
{
public:
	Account(int = 0);
	void credit(int);
	void debit(int);
	int getBalance();
private:
	int money;
};