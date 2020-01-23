#include <iostream>
#include <cmath>

#include "Average.h"

using namespace std;

Average::~Average()
{

}

int Average::Avg()
{
	int sum = 10;
	int count = 4;
	double average = (double)sum / (double)count;
	cout << average;
	return 0;
}

