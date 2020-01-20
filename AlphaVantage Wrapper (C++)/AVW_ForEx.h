#pragma once
#include <string>
#include "AVW_Enums.h"


namespace AVW {
	
	//Main ForeignExchange (FX) Call
	std::wstring ForeignExchange(Function inFunc, const std::wstring& fromSymbol, const std::wstring& toSymbol, Interval inInterval, OutputSize inOutputSize, DataType inDataType);
	//Quick FX call
	std::wstring ForeignExchange(Function inFunc, const std::wstring& fromSymbol, const std::wstring& toSymbol);
	//Quick Fx call with intervals
	std::wstring ForeignExchange(Function inFunc, const std::wstring& fromSymbol, const std::wstring& toSymbol, Interval inInterval);
	std::wstring ForeignExchange(Function inFunc, const std::wstring& fromSymbol, const std::wstring& toSymbol, Interval inInterval, OutputSize inOutputSize);
	std::wstring ForeignExchange(Function inFunc, const std::wstring& fromSymbol, const std::wstring& toSymbol, Interval inInterval, DataType inDataType);
	//Quick FX call without intervals
	std::wstring ForeignExchange(Function inFunc, const std::wstring& fromSymbol, const std::wstring& toSymbol, OutputSize inOutputSize, DataType inDataType);
	std::wstring ForeignExchange(Function inFunc, const std::wstring& fromSymbol, const std::wstring& toSymbol, OutputSize inOutputSize);
	std::wstring ForeignExchange(Function inFunc, const std::wstring& fromSymbol, const std::wstring& toSymbol, DataType inDataType);


	std::wstring CurrencyExchangeRate(const std::wstring& fromSymbol, const std::wstring& toSymbol);
}