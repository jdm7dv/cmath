#pragma once
#include <iostream>
#include <cmath>

using namespace std;

class Divsion
{
public:

	~Divsion()
	{

	}

	int Div()
	{
		int a = 5 / 2;
		double b = 5 / 2;
		double c = 5.0 / 2;
		double d = 5 / 2.0;
		double e = 5.0 / 2.0;
		int f = 5 / 2.0;

		cout << "a=" << a << " b=" << b << " c=" << c << " d=" << d << " e=" << e << " f=" << f << endl;
		return 0;
	}

};
