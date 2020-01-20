#pragma once
#include <string>
#include "AVW_Enums.h"

namespace AVW{

	//Main TimeSeries (TS) Call
	std::wstring TimeSeries(Function inFunc, const std::wstring& inSymbol, Interval inInterval, OutputSize inOutputSize, DataType inDataType);
	//Quick TS Call
	std::wstring TimeSeries(Function inFunc, const std::wstring& inSymbol);
	//Quick TS Call with Intervals
	std::wstring TimeSeries(Function inFunc, const std::wstring& inSymbol, Interval inInterval);
	std::wstring TimeSeries(Function inFunc, const std::wstring& inSymbol, Interval inInterval, OutputSize inOutputSize);
	std::wstring TimeSeries(Function inFunc, const std::wstring& inSymbol, Interval inInterval, DataType inDataType);
	//Quick TS Call, no Intervals
	std::wstring TimeSeries(Function inFunc, const std::wstring& inSymbol, OutputSize inOutputSize, DataType inDataType);
	std::wstring TimeSeries(Function inFunc, const std::wstring& inSymbol, OutputSize inOutputSize);
	std::wstring TimeSeries(Function inFunc, const std::wstring& inSymbol, DataType inDataType);
		 
		 
	std::wstring SearchEndpoint(const std::wstring inKeywords, DataType inDataType = json);

}