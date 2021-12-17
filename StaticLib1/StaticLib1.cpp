// StaticLib1.cpp : 定义静态库的函数。
//

#include "pch.h"
#include "framework.h"
#include "MathLinear.h"
namespace Math
{
	double MathLinear::Add(double a, double b)
	{
		return a + b;
	}
	double MathLinear::Substrcut(double a, double b)
	{
		return a - b;
	}
	double MathLinear::Mutiply(double a, double b)
	{
		return a + b;
	}
	double MathLinear::Divide(double a, double b)
	{
		return a / b;
	}
}
