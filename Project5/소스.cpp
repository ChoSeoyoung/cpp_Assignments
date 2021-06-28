#include <iostream>
using namespace std;

class Shape {
protected:
	int x, y; //��ġ������ �ش��ϴ� x���� y��
public:
	Shape(int x, int y) { //Shape ������ �Լ�
		this->x = x;
		this->y = y;
	}
	~Shape() {} //Shape �Ҹ��� �Լ�
	virtual void draw() = 0;
	virtual double getArea() = 0;
};

class Rectangle : public Shape {
	int width, height; //�簢���� ����(width)�� ����(height)����
public:
	Rectangle(int x, int y, int width, int height) : Shape(x, y) {
		this->width = width;
		this->height = height;
	}
	virtual ~Rectangle() {} //Rectangle �Ҹ��� �Լ�
	virtual void draw() { //���� ���� �Լ� ����
		cout << "Rectangle drawn at : (" << x << "," << y << ")" << endl;
	}
	virtual double getArea() { //���� ���� �Լ� ����
		return width * height;
	}
};

class Circle : public Shape {
	int radius; //���� ������(radius)����
public:
	Circle(int x, int y, int radius) :Shape(x, y) {
		this->radius = radius;
	}
	virtual ~Circle() {} //Circle �Ҹ��� �Լ�
	virtual void draw() { //���� ���� �Լ� ����
		cout << "Circle drawn at : (" << x << "," << y << ")" << endl;
	}
	virtual double getArea() { //���� ���� �Լ� ����
		return radius * radius * 3.14;
	}
};

int main() {
	Shape* pS;
	Rectangle r(10, 20, 100, 100);  // (10, 20)��ġ�� ���� 100, ���� 100�� �簢�� ��ü ����
	pS = &r;
	pS->draw();
	cout << "�簢�� ���� = " << pS->getArea() << endl << endl;
	Circle c(120, 150, 40);
	pS = &c;
	pS->draw();
	cout << "�� ���� = " << pS->getArea() << endl << endl;
	return 0;
}

