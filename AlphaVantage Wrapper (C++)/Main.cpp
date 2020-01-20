#include "AVW_StockTimeSeries.h"
#include "AVW_ForEx.h"
#include <iostream>

int main() {
	
	std::wcout << AVW::CurrencyExchangeRate(L"USD", L"JPY");
	std::cin.get();
	std::wcout << AVW::ForeignExchange(AVW::Intraday, L"EUR", L"USD");


	std::cin.get();
	return 0;
}