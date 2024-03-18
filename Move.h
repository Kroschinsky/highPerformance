#pragma once

#include <iostream>
#include <vector>
#include <string>
#include <utility>

class MoveContainer
{
public:

	// std::move can be used in any std container
	MoveContainer(const std::string& name, std::vector<std::string> strings)
		: m_name(name)
		, m_strings(std::move(strings))
	{

	}

	static void show();
	
	void print();

private:

	std::string m_name;
	std::vector<std::string> m_strings;

};

