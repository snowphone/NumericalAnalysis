#include <iostream>
using namespace std;
template<class T>
T Calc_Emach() {
	T Emach = 1;
	for (T Emach_copy = Emach; (T)1 + Emach_copy > (T)1; Emach_copy /= 2)
		Emach = Emach_copy;
	return Emach;
}

template<class T>
T Calc_Min() {
	T min = 1;
	for (T min_copy = min; min_copy > 0; min_copy /= 2)
		min = min_copy;
	return min;
}

int main() {
	cout << "B611062 ¹®ÁØ¿À" << endl;
	cout << "Minimum Denormalized Number: " << Calc_Min<float>() << endl;
	cout << "Emach: " << Calc_Emach<float>() << endl;
}