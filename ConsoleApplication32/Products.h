#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
class Products
{
	char _title[100];
	int _price;
public:
	Products(const char title[], int price)
	{
		strcpy_s(_title, title);
		_price = price;
	}

	char* GetTitle()
	{
		return _title;
	}

	int GetPrice()
	{
		return _price;
	}

	void showProduct()
	{
		cout << "наименование " << _title << endl;
		cout << "цена " << _price << endl;
	}
};

