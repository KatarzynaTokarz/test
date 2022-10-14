#pragma once
#include<map>
#include "TempRatesRetriever.h"

class Converter
{

	TempRatesRetriever tempRatesRetriever;
public:

	float calculateBuy(float amount, Currency::CurrencyCode currCodeSource)
	{
		std::map<Currency::CurrencyCode, Currency> rates = tempRatesRetriever.getRates();
		float wynik = amount * rates[currCodeSource].getBuyPrice();
		return wynik;

	}
	//float calculatesell(float amount, Currency::Currencycode currCodeSource)
	//{
	//	std::map<Currency::Currencycode, Currency> rates = tempratesretriever.getrates();

	//	float wynik = amount *(1/(rates[currencytarget].getsellprice()));
	//	return wynik;
	//}

};
