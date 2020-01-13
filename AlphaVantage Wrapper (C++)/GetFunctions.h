#pragma once
#include <string>
#include <iostream>

namespace AVW {
	std::string GetToString(const std::wstring& input) {
		std::wcout << input << std::endl;
		return "Got Dang it Bobby";
	}
}