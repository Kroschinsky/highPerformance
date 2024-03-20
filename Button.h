#pragma once

#include <string>

class Button
{
public:

	Button() {}

	auto set_title(const std::string& s);
	auto set_title(std::string&& s);

	std::string title_;



	static std::string get_ok() { return std::string("OK"); }

	static void showCase();

private:
};

