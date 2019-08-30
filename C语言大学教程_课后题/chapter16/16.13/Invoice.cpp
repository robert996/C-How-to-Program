#include "Invoice.h"
#include <iostream>
#include <string>

using namespace std;

Invoice::Invoice(string num, string info, int count, int price)
{
	setNum(num);
	setInfo(info);
	setCount(count);
	setPrice(price);
	cout << "������Ʊ�ɹ���\n";
	diplayInvoice();
}

void Invoice::setNum(string _num)
{
	num = _num;
}

string Invoice::getNum()
{
	return num;
}

void Invoice::setInfo(string _info)
{
	info = _info;
}

string Invoice::getInfo()
{
	return info;
}

void Invoice::setCount(int _count)
{
	if (_count >= 0)
	{
		count = _count;
	}
	else
	{
		count = 0;
	}
}

int Invoice::getCount()
{
	return count;
}

void Invoice::setPrice(int _price)
{
	if (_price >= 0)
	{
		price = _price;
	}
	else
	{
		price = 0;
	}
}

int Invoice::getPrice()
{
	return price;
}

int Invoice::getInvoiceAmount()
{
	cout << "��Ʊ��ֵ��" << count * price << endl;
	return count * price;
}

void Invoice::diplayInvoice()
{
	cout << "��ţ�" << num << "\t"
		<< "���������" << info << "\t"
		<< "��Ʒ������" << count << "\t"
		<< "��Ʒ���ۣ�" << price << endl;
}