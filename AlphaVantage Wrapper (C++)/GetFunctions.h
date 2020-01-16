#pragma once
#include <string>

namespace AVW {
	//Add Key here if you'd rather not read from file.
	const static std::wstring AlphaVantageKey = L"demo";

	std::wstring GetKey(void);

	std::wstring GetToString(const std::wstring& input);
}