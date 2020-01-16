#include "GetFunctions.h"
#pragma comment(lib, "windowsapp")
#include <winrt/Windows.Foundation.h>
#include <winrt/Windows.Web.Http.Headers.h>


std::wstring AVW::GetToString(const std::wstring& input)
{
	using namespace winrt;
	using namespace Windows::Foundation;

	init_apartment();

	// Create an HttpClient object.
	Windows::Web::Http::HttpClient httpClient;

	// Add a user-agent header to the GET request.
	auto headers{ httpClient.DefaultRequestHeaders() };

	// The safe way to add a header value is to use the TryParseAdd method, and verify the return value is true.
	// This is especially important if the header value is coming from user input.
	std::wstring header{ L"ie" };
	if (!headers.UserAgent().TryParseAdd(header))
	{
		throw L"Invalid header value: " + header;
	}

	header = L"Mozilla/5.0 (compatible; MSIE 10.0; Windows NT 6.2; WOW64; Trident/6.0)";
	if (!headers.UserAgent().TryParseAdd(header))
	{
		throw L"Invalid header value: " + header;
	}

	Uri requestUri{ input };

	// Send the GET request asynchronously, and retrieve the response as a string.
	Windows::Web::Http::HttpResponseMessage httpResponseMessage;
	std::wstring httpResponseBody;

	try
	{
		// Send the GET request.
		httpResponseMessage = httpClient.GetAsync(requestUri).get();
		httpResponseMessage.EnsureSuccessStatusCode();
		httpResponseBody = httpResponseMessage.Content().ReadAsStringAsync().get();
	}
	catch (winrt::hresult_error const& ex)
	{
		httpResponseBody = ex.message();
	}

	return httpResponseBody;
}
