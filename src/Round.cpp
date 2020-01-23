#include <iostream>
#include <cmath>

#include "Round.h"

using namespace std;

Round::~Round()
{

}

int Round::Rnd()
{
	double d = 2.72;
	int a = (int)round(d);
	cout << a;
	return 0;
}