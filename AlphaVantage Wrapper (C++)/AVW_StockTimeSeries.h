#pragma once
#include <string>

namespace AVW{

	enum TimeSeriesFunction {
		Intraday,
		Daily,
		DailyAdjusted,
		Weekly,
		WeeklyAdjusted,
		Monthly,
		MonthlyAdjusted,
		QuoteEndpoint
	};

	enum TimeSeriesInterval {
		none,
		n_1min,
		n_5min,
		n_15min,
		n_30min,
		n_60min
	};

	enum TimeSeriesOutputSize {
		compact,
		full
	};

	enum TimeSeriesDataType {
		json,
		csv
	};

	//Main TimeSeries (TS) Call
	std::wstring TimeSeries(TimeSeriesFunction inFunc, const std::wstring& inSymbol, TimeSeriesInterval inInterval, TimeSeriesOutputSize inOutputSize, TimeSeriesDataType inDataType);
	//Quick TS Call
	std::wstring TimeSeries(TimeSeriesFunction inFunc, const std::wstring& inSymbol);
	//Quick TS Call with Intervals
	std::wstring TimeSeries(TimeSeriesFunction inFunc, const std::wstring& inSymbol, TimeSeriesInterval inInterval);
	std::wstring TimeSeries(TimeSeriesFunction inFunc, const std::wstring& inSymbol, TimeSeriesInterval inInterval, TimeSeriesOutputSize inOutputSize);
	std::wstring TimeSeries(TimeSeriesFunction inFunc, const std::wstring& inSymbol, TimeSeriesInterval inInterval, TimeSeriesDataType inDataType);
	//Quick TS Call, no Intervals
	std::wstring TimeSeries(TimeSeriesFunction inFunc, const std::wstring& inSymbol, TimeSeriesOutputSize inOutputSize, TimeSeriesDataType inDataType);
	std::wstring TimeSeries(TimeSeriesFunction inFunc, const std::wstring& inSymbol, TimeSeriesOutputSize inOutputSize);
	std::wstring TimeSeries(TimeSeriesFunction inFunc, const std::wstring& inSymbol, TimeSeriesDataType inDataType);
		 
		 
	std::wstring SearchEndpoint(const std::wstring inKeywords, TimeSeriesDataType inDataType = json);

}