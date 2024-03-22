#pragma once

//
//	lambda function is a class with call operator
//	auto is_above = [x](int y) { return y > x; };
//
class LambdaObjectValue
{
public:

	LambdaObjectValue(int x)
		: m_x(x)
	{

	}

	auto operator()(int y) const
	{
		return y > m_x;
	}

private:

	int m_x;
};


//
//	lambda function is a class with call operator
//	auto is_above = [&x](int y) { return y > x; };
//
class LambdaObjectRef
{
public:

	LambdaObjectRef(int& x)
		: m_x(x)
	{

	}

	auto operator()(int y) const
	{
		return y > m_x;
	}

private:

	int& m_x;
};


