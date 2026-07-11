#pragma once
#include <string>
#include <string_view>
#include <source_location>

//MACROS
#define TRPG_LOG(x) Logger::Log(x);
#define TRPG_ERROR(x) Logger::Error(x);

class Logger
{
private:
	static std::string CurrentDate(); //date for all messages from errors

public:
	Logger() {};
	~Logger() = default;

	static void Log(const std::string_view message);
	static void Error(const std::string_view message, std::source_location location= std::source_location::current());
};
