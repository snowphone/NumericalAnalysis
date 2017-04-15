#include <iostream>
#include <cmath>

//function
template<typename T> T func(T x) {
	return ((x - 3.)*(x - 3.)*(x - 3.));
}
//differentiated function
template<typename T> T dfunc(T x) {
	return (3.*(x - 3.)*(x - 3.));
}

int main() {
	double oldx, xn = 4.;
	const double error = 0.1e-70;
	int i = 1;

	while (i++) {
		oldx = xn;
		xn = xn - func(xn) / dfunc(xn);

		printf("%d answer %.5f\n", i, xn);
		if (fabs(oldx - xn) < error)
			break;
	}
}