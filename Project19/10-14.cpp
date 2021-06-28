#include <iostream>
#include <vector>
using namespace std;

int square(int x) { return x * x; }

int main() {
	//�⺻ Ÿ�� ���� autoȰ��
	auto c = 'a'; //c�� charŸ������ ����
	auto pi = 3.14; //pi�� doubleŸ������ ����
	auto ten = 10; //ten�� intŸ������ ����
	auto* p = &ten; //���� p�� int* Ÿ������ ����
	cout << c << " " << pi << " " << ten << " " << *p << endl;

	//�Լ��� ���� Ÿ������ �߷�
	auto ret = square(3); //square�Լ��� ���� Ÿ���� int�̹Ƿ� ret�� int�� ����
	cout << *p << " " << ret << endl;

	vector<int> v = { 1,2,3,4,5 };//���� v�� 5���� ����, 1,2,3,4,5 ����
	vector<int>::iterator it;
	for (it = v.begin(); it != v.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;

	//���ø��� auto�� ����Ͽ� ������ ������ ����ȭ
	for (auto it = v.begin(); it != v.end(); it++) {
		cout << *it << " ";
	}
}