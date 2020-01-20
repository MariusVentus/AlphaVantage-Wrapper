#pragma once


namespace AVW {
	enum Function {
		Intraday,
		Daily,
		DailyAdjusted,
		Weekly,
		WeeklyAdjusted,
		Monthly,
		MonthlyAdjusted,
		QuoteEndpoint
	};

	enum Interval {
		none,
		n_1min,
		n_5min,
		n_15min,
		n_30min,
		n_60min
	};

	enum OutputSize {
		compact,
		full
	};

	enum DataType {
		json,
		csv
	};
}