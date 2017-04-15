#include <iostream>
#include <cmath>
template <typename T>
T mysqrt(T r) {
	T x, oldx;
	double error = 0.00001;

	if (r < 0)
		return 0.;
	x = r;
	while(true) {
		oldx = x;
		x = (x*x + r) / 2. / x;
		printf("%.5f %.5f\n", x, oldx);
		if (fabs(oldx - x) < error)
			break;
	}
	return x;
}

int main() {
	float number = 2;
	printf("sqrt(%.5f ) = %.5f\n", number, mysqrt(number));
}