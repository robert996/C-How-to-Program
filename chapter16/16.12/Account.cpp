#include <iostream>
#include "Account.h"

using namespace std;

Account::Account(int amount)
{
	if (amount >= 0)
	{
		cout << "���ѳɹ������˻�.\n" << endl;
		money = amount;
	}
	else
	{
		cout << "�˻������Ч���˻��Ѵ�����" << endl;
		money = 0;
	}
	getBalance();
}

void Account::credit(int amount)
{
	if (amount >= 0)
	{
		money += amount;
		cout << "�����˻����" << amount << "Ԫ.\n" << endl;
	}
	else
	{
		cout << "���ʧ�ܣ�������Ϊ����\n" << endl;
	}
	getBalance();
}

void Account::debit(int amount)
{
	if (amount <= money && amount >= 0)
	{
		money -= amount;
		cout << "�����˻���ȡ��" << amount << "Ԫ.\n" << endl;
	}
	else
	{
		cout << "ȡ��ʧ�ܣ�ȡ�����Ϊ�����ߴ����˻���\n" << endl;
	}
	getBalance();
}

int Account::getBalance()
{
	cout << "�����˻����Ϊ��" << money << "Ԫ\n" << endl;
	return money;
}