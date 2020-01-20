#include "AVW_ForEx.h"
#include "GetFunctions.h"


std::wstring AVW::ForeignExchange(Function inFunc, const std::wstring& fromSymbol, const std::wstring& toSymbol, Interval inInterval, OutputSize inOutputSize, DataType inDataType)
{
	std::wstring baseString = L"https://www.alphavantage.co/query?";

	//Function Switch
	switch (inFunc)
	{
	case AVW::Intraday:
		baseString.append(L"function=FX_INTRADAY");
		break;
	case AVW::Daily:
		baseString.append(L"function=FX_DAILY");
		break;
	case AVW::Weekly:
		baseString.append(L"function=FX_WEEKLY");
		break;
	case AVW::Monthly:
		baseString.append(L"function=FX_MONTHLY");
		break;
	default:
		baseString.append(L"function=FX_INTRADAY");
		break;
	}

	//From Symbol
	baseString.append(L"&from_symbol=");
	baseString.append(fromSymbol);
	//To Symbol
	baseString.append(L"&to_symbol=");
	baseString.append(toSymbol);

	//Interval
	if (inFunc == Intraday) {
		switch (inInterval)
		{
		case AVW::none:
			baseString.append(L"&interval=5min");
			break;
		case AVW::n_1min:
			baseString.append(L"&interval=1min");
			break;
		case AVW::n_5min:
			baseString.append(L"&interval=5min");
			break;
		case AVW::n_15min:
			baseString.append(L"&interval=15min");
			break;
		case AVW::n_30min:
			baseString.append(L"&interval=30min");
			break;
		case AVW::n_60min:
			baseString.append(L"&interval=60min");
			break;
		default:
			baseString.append(L"&interval=5min");
			break;
		}
	}

	//Output Size
	if (inOutputSize == full) {
		if (inFunc == Intraday || inFunc == Daily) {
			baseString.append(L"&outputsize=full");
		}
	}

	//Key
	baseString.append(L"&apikey=");
	baseString.append(GetKey());

	//DataType
	if (inDataType == csv) {
		baseString.append(L"&datatype=csv");
	}

	return GetToString(baseString);

}

//OVERLOADS-------------------------------------------------------------------------
//Quick FX call
std::wstring AVW::ForeignExchange(Function inFunc, const std::wstring & fromSymbol, const std::wstring & toSymbol)
{
	return ForeignExchange(inFunc, fromSymbol, toSymbol, none, compact, json);
}
//Quick Fx call with intervals
std::wstring AVW::ForeignExchange(Function inFunc, const std::wstring & fromSymbol, const std::wstring & toSymbol, Interval inInterval)
{
	return ForeignExchange(inFunc, fromSymbol, toSymbol, inInterval, compact, json);
}

std::wstring AVW::ForeignExchange(Function inFunc, const std::wstring & fromSymbol, const std::wstring & toSymbol, Interval inInterval, OutputSize inOutputSize)
{
	return ForeignExchange(inFunc, fromSymbol, toSymbol, inInterval, inOutputSize, json);
}

std::wstring AVW::ForeignExchange(Function inFunc, const std::wstring & fromSymbol, const std::wstring & toSymbol, Interval inInterval, DataType inDataType)
{
	return ForeignExchange(inFunc, fromSymbol, toSymbol, inInterval, compact, inDataType);
}
//Quick FX call without intervals
std::wstring AVW::ForeignExchange(Function inFunc, const std::wstring & fromSymbol, const std::wstring & toSymbol, OutputSize inOutputSize, DataType inDataType)
{
	return ForeignExchange(inFunc, fromSymbol, toSymbol, none, inOutputSize, inDataType);
}

std::wstring AVW::ForeignExchange(Function inFunc, const std::wstring & fromSymbol, const std::wstring & toSymbol, OutputSize inOutputSize)
{
	return ForeignExchange(inFunc, fromSymbol, toSymbol, none, inOutputSize, json);
}

std::wstring AVW::ForeignExchange(Function inFunc, const std::wstring & fromSymbol, const std::wstring & toSymbol, DataType inDataType)
{
	return ForeignExchange(inFunc, fromSymbol, toSymbol, none, compact, inDataType);
}




//Exchange Rate
std::wstring AVW::CurrencyExchangeRate(const std::wstring& fromSymbol, const std::wstring& toSymbol)
{
	std::wstring baseString = L"https://www.alphavantage.co/query?function=CURRENCY_EXCHANGE_RATE&from_currency=";

	baseString.append(fromSymbol);
	//To Symbol
	baseString.append(L"&to_currency=");
	baseString.append(toSymbol);

	//Key
	baseString.append(L"&apikey=");
	baseString.append(GetKey());

	return GetToString(baseString);

}
