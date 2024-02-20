#include <iostream>
#include "BlueBerries.h"

using namespace std;
int main()
{
	setlocale(0,"");
	Banck_Card card(12321233, 433333321, 123, 555);
	BlueBerries dada;
	dada.showall();
	dada.SellProduct(card, 4);
	
}