#include <iostream>
using namespace std;

//�� ���� ���׸� Ÿ�� T1,T2�� ������ copy()�� ���ø�
template <class T1, class T2>
void mcopy(T1 src[], T2 dest[], int n) { //src[]�� n���� ���Ҹ� dest[]�� �����ϴ� �Լ�
	for (int i = 0; i < n; i++) {
		dest[i] = (T2)src[i];//T1Ÿ���� T2Ÿ������ ��ȯ�Ѵ�.
	}
}

int main() {
	int x[5] = { 1,2,3,4,5 };
	double d[5];
	char c[5] = { 'H','e','l','l','o' }, e[5];

	mcopy(x, d, 5);
	mcopy(c, e, 5);

	for (int i = 0; i < 5; i++)
		cout << d[i] << ' ';
	cout << endl;
	for (int i = 0;i < 5; i++)
		cout << e[i] << ' ';
	cout << endl;
	return 0;
}