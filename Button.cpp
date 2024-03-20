#include "Button.h"

auto Button::set_title(const std::string& s)
{ 
	title_ = s; 
}

auto Button::set_title(std::string&& s) 
{ 
	title_ = std::move(s); 
}

void Button::showCase()
{
	auto button = Button();

	{
		auto str = std::string("OK");
		button.set_title(str);					// copy-assignment
	}

	{
		auto str = std::string("OK");
		button.set_title(std::move(str));		// move-assignment
	}

	{
		button.set_title(Button::get_ok());		// move-assignment
	}

	{
		auto str = Button::get_ok();
		button.set_title(str);					// copy-assignment
	}

	// To move a named object, the object cannot be declared const.
	{
		const auto str = Button::get_ok();
		button.set_title(std::move(str));		// copy-assignment
	}
}
