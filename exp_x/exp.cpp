#include <iostream>
#include <cmath>
using namespace std;
typedef long double ty;
	
template <class T> T exp(T x) {
	T ret = 1;
	int order = 0;
	//[0, 20) �� �׿� ���ؼ� ���Ϸ� �޼� ���
	while (++order < 20)
		ret += ret * x / order;
	return ret;
}
int main() {
	ty x = 1;
	cout << exp(x) << endl;

}
