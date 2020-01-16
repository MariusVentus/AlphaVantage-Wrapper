#include "AVW_StockTimeSeries.h"
#include <iostream>

int main() {
	
	std::wcout << AVW::SearchEndpoint(L"Micro");

	std::cin.get();

	std::wcout << AVW::TimeSeries(AVW::Intraday, L"MSFT");

	std::cin.get();
	return 0;
}