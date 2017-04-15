#include <iostream>
#include <cmath>

template <typename T> T func(T x) {
	return (x - 2.* sin(x));
	//return ( x * sin(x) - 1.0 ) ; 
}

/* #define myfabs((x)) ((((x)>0.)?(x):(-(x)))) */

int main() {
	double a = 0.0001, b = 7.0, c;
	double error = 0.00001;
	int i = 0;

	if (func(a) * func(b) > 0.0) {
		printf("wrong interval\n");
		return 0;
	}

	do{
		c = (a + b) / 2.0;
		if (fabs(b - a) < error && fabs(func(c)) < error)
			break;
		if (func(a) * func(c) > 0.0)
			a = c;
		else
			b = c;
		printf("%d intermediate computation %.5f\n", i, c);
	} while (++i);
	printf("%d answer %.5f\n", i, c);
}