#pragma once
class Banck_Card
{
	long int _number;
	int _money;
	int _pin;
	int _CVV;
public:
	Banck_Card(long int number, int money, int pin, int CVV)
	{
		_number = number;
		_money = money;
		_pin = pin;
		_CVV = CVV;
	}

	long int GetNumber()
	{
		return _number;
	}
	int GetMoney()
	{
		return _money;
	}
	int GetPin()
	{
		return _pin;
	}
	int GetCVV()
	{
		return _CVV;
	}

	void Salary(int money)
	{
		_money += money;
	}
	void MatherGiveMyMoney()
	{
		_money += 500;
	}
	void BuySomeThing(int price)
	{
		if (price <= _money)
			_money -= price;

	}
};

