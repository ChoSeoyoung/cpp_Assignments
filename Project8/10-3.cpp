#include <iostream>
using namespace std;

template <class T>
T add(T data[], int n) {
	T sum = 0;
	for (int i = 0; i < n; i++) {
		sum += data[i];
	}
	return sum;//sum�� Ÿ�԰� ���� Ÿ���� ��� T�� ����Ǿ� ����
}

int main() {
	int x[] = { 1,2,3,4,5 };
	double d[] = { 1.2,2.3,3.4,4.5,5.6,6.7 };

	cout << "sum for x[] = " << add(x, 5) << endl;//�迭 x�� ���� 5���� ���� ���
	cout << "sum for d[] = " << add(d, 6) << endl;//�迭 d�� ���� 6���� ���� ���
}