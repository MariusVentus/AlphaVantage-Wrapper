#include "AVW_StockTimeSeries.h"
#include <iostream>

int main() {

	std::cout << AVW::TimeSeries(AVW::Intraday, L"MSFT");

	std::cin.get();
	return 0;
}