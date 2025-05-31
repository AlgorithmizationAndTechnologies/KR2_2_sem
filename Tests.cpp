#include <iostream>
#include <cassert>
#include "Area.h"
using namespace std;

void Test() {
	double a = 12;
	int n = 3;

	double r_ins = 3.464;
	assert(r_ins - 1 <= Radius_inside_figure(n, a) && Radius_inside_figure(n, a) <= r_ins + 1);

	double r_out = 6.928;
	assert(r_out - 1 <= Radius_outside_figure(n, a) && Radius_outside_figure(n, a) <= r_out + 1);

	double area = 62.354;
	assert(area - 1 <= Area_figure(n, a) && Area_figure(n, a) <= area + 1);

	int n2 = 4;

	double area2 = 144;
	assert(area2 - 1 <= Area_figure(n2, a) && Area_figure(n2, a) <= area2 + 1);

	double r_out2 = 8.485;
	assert(r_out2 - 1 <= Radius_outside_figure(n2, a) && Radius_outside_figure(n2, a) <= r_out2 + 1);
}