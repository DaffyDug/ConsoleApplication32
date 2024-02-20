#pragma once
#include "Products.h"
#include "Banck_Card.h"
class BlueBerries
{
	Products* p = new Products("крушка-игрушка!", 150);
	Products* p1 = new Products("медведь-амбал", 11250);
	Products* p2 = new Products("Rollex", 15032);
	Products* p3 = new Products("Lamborgini", 5000);
	Products* p4 = new Products("BMW-X5", 9000000);
	Products* products[5]{ p, p1, p2, p3, p4 };
public:
	BlueBerries()
	{

	}
	void showall()
	{
		for (int i = 0; i < 5; i++)
		{
			cout << "****************************************************" << endl;
			products[i]->showProduct();
		}
	}
	void SellProduct(Banck_Card& card, int num)
	{
		if (card.GetMoney() < products[num]->GetPrice())
		{
			cout << "нет денег" << endl;
			return;
		}
		cout << "Enter CVV code: ";
		int code;
		cin >> code;
		if (card.GetCVV() == code)
		{
			cout << "Поздравляю с покупкой " << products[num]->GetTitle() << endl;
			card.BuySomeThing(products[num]->GetPrice());
			cout << "ваш трек номер заказа " << rand() << endl;
		}
	}
};

