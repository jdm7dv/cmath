#pragma once
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

class Trig
{
	public:

	~Trig();

	int TrigFun()
	{
		const double PI = 3.14259;

		double angle;
		double radian;
		double degree;
		double rad1;
		double result;
		double result1;
		double result2;
		double result3;
		cout << "Please enter the angel in degree: \n";
		cin >> degree;
		cin.ignore();
		rad1 = (degree * PI / 180);

		result = ::sin(degree * PI / 180.0);
		result1 = ::cos(degree * PI / 180.0);
		result2 = ::tan(degree * PI / 180.0);
		result3 = ::asin(degree * PI / 180.0);

		cout << "Angle" << "\t" << "Sin" << "\t" << "Cos" << "\t" << "Tan" << endl;

		cout << " The sine of " << degree << " degree is" << result << " . " << endl;
		cout << " The cosine of " << degree << " degree is " << result1 << " . " << endl;
		cout << " The tangent of " << degree << " degree is " << result2 << " . " << endl;
		cout << " The arcsin of " << degree << " degree is " << result3 << " ." << endl;

		return 0;
	}


};
