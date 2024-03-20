#pragma once

#include <algorithm>
#include <cctype>
#include <initializer_list>
#include <locale>
#include <vector>

class BufferMove
{
public:

	// Constructor
	BufferMove(const std::initializer_list<float>& values);

	// Destructor
	~BufferMove();

	// Copy constructor
	BufferMove(const BufferMove& other);

	// Copy assignment
	auto& operator=(const BufferMove& other);

	// Move constructor
	BufferMove(BufferMove&& other) noexcept;

	// Move assignment
	auto& operator=(BufferMove&& other) noexcept;

	// Iterators for accessing the data
	auto begin() const { return m_ptr; }
	auto end() const { return m_ptr + m_size; }


	//
	static void showCopy();

private:

	size_t m_size = 0;
	float* m_ptr = nullptr;
};

