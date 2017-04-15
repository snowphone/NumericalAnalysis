#include <iostream>
#include <cmath>
//f(x) = cos(x) - x*exp(x); f(x) = 0
template <class T>
T g(T x) {
	return cosl(x) / expl(x);
}
typedef double ty;
int main() {
	//a < b
	ty a = -0.4;
	ty b = 100;
	ty error = 0.000001, x = 2;

	int i = 0;
	while(++i){
		ty oldx = x;
		x = g(x);
		if (x < a || x > b) {
			std::cout << "range error" << std::endl;
			return 0;
		}
		printf("%d th result: %f\n", i, x);
		if (abs(x - oldx) < error)
			return 0;
	}
}