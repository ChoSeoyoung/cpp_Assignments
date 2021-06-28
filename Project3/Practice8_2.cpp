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
		cout << "반지름이 " << getRadius() << "인 " << name << endl;
	}
};

int main() {
	NamedCircle pizza[5];//반지름이 3이고 이름이 waffle인 원
	int max_size = 0;
	string max_name;

	cout << "5 개의 정수 반지름과 원의 이름을 입력하세요" << endl;
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

	cout << "가장 면적이 큰 피자는 " << max_name << "입니다" << endl;
	return 0;
}