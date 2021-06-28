#include <iostream>
#include <string>
using namespace std;

class Circle {
	int radius;
public:
	Circle(int radius = 0) { this->radius = radius; }
	int getRadius() { return radius; }
	void setRadius(int radius) { this->radius = radius; }
	double getArea() { return 3.14 * radius * radius; }
};

class NamedCircle : public Circle {
	string name;
public:
	NamedCircle(int radius=0, string name="") :Circle(radius) { this->name = name; }
	void show() {
		cout << "�������� " << getRadius() << "�� " << name << endl;
	}
};

int main() {
	NamedCircle pizza[5];//�������� 3�̰� �̸��� waffle�� ��
	int max_size = 0;
	string max_name;

	cout << "5 ���� ���� �������� ���� �̸��� �Է��ϼ���" << endl;
	int r;
	string n;
	for (int i = 1; i <= 5; i++) {
		cout << i << ">> ";
		cin >> r >> n;
		pizza[i-1] = NamedCircle(r, n);
		if (r > max_size) {
			max_size = r;
			max_name = n;
		}
	}

	cout << "���� ������ ū ���ڴ� " << max_name << "�Դϴ�" << endl;
	return 0;
}