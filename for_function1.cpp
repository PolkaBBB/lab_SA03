#include<iostream>
#include<math.h>

double Function1(double x) {
	double res;
	res = (-sqrt(x)) * sin(x);
	return res;
}

int main() {
	double T_max = 10000.;
	double T_min = 0.1;
	double a = 0.;
	double b = 3.;
	double x1 = rand() % 3000;
	       x1 = x1 / 1000;
	double x2, value2, value1, d_value, value_min, x_min;
	int N = 1;
	x2 = rand() % 3000;
	x2 = x2 / 1000;
	while (T_max > T_min) {
		value2 = Function1(x2);
		value1 = Function1(x1);
		d_value = value2 - value1;
		if (d_value <= 0) {
			std::cout << N << ") ";
			value_min = value2;
			x_min = x2;
			x1 = rand() % 3000;
			x1 = x1 / 1000;
			std::cout << T_max << "  ||  ";
			T_max = T_max * 0.95;
			N = N + 1;
			std::cout << x2 << "  ||  ";
			std::cout << value_min << std::endl;
		}
		else {
			x1 = rand() % 3000;
			x1 = x1 / 1000;
			x2 = rand() % 3000;
			x2 = x2 / 1000;
			T_max = T_max * 0.95;
			N = N + 1;
		}
	}
	std::cout << "MIN:  ";
	std::cout << x_min << "  :  " << value_min << std::endl;
	return 0;
}
