#pragma once
#include <string>
#include <string_view>
#include <source_location>

class Logger
{
private:
	static std::string CurrentDate();

public:
	Logger() {};
	~Logger() = default;

	static void Log(const std::string_view message);
	static void Error(const std::string_view, std::source_location = std::source_location::current());
};
