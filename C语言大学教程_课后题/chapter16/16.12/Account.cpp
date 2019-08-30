#include <iostream>
#include "Account.h"

using namespace std;

Account::Account(int amount)
{
	if (amount >= 0)
	{
		cout << "您已成功创建账户.\n" << endl;
		money = amount;
	}
	else
	{
		cout << "账户金额无效，账户已创建。" << endl;
		money = 0;
	}
	getBalance();
}

void Account::credit(int amount)
{
	if (amount >= 0)
	{
		money += amount;
		cout << "您向账户存款" << amount << "元.\n" << endl;
	}
	else
	{
		cout << "存款失败，存款金额不能为负。\n" << endl;
	}
	getBalance();
}

void Account::debit(int amount)
{
	if (amount <= money && amount >= 0)
	{
		money -= amount;
		cout << "您从账户中取款" << amount << "元.\n" << endl;
	}
	else
	{
		cout << "取款失败，取款金额不能为负或者大于账户余额。\n" << endl;
	}
	getBalance();
}

int Account::getBalance()
{
	cout << "您的账户余额为：" << money << "元\n" << endl;
	return money;
}