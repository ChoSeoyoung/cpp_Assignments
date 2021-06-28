#include <iostream>
using namespace std;

class Shape {
protected:
	int x, y; //위치정보에 해당하는 x값과 y값
public:
	Shape(int x, int y) { //Shape 생성자 함수
		this->x = x;
		this->y = y;
	}
	~Shape() {} //Shape 소멸자 함수
	virtual void draw() = 0;
	virtual double getArea() = 0;
};

class Rectangle : public Shape {
	int width, height; //사각형의 가로(width)와 세로(height)정보
public:
	Rectangle(int x, int y, int width, int height) : Shape(x, y) {
		this->width = width;
		this->height = height;
	}
	virtual ~Rectangle() {} //Rectangle 소멸자 함수
	virtual void draw() { //순수 가상 함수 구현
		cout << "Rectangle drawn at : (" << x << "," << y << ")" << endl;
	}
	virtual double getArea() { //순수 가상 함수 구현
		return width * height;
	}
};

class Circle : public Shape {
	int radius; //원의 반지름(radius)정보
public:
	Circle(int x, int y, int radius) :Shape(x, y) {
		this->radius = radius;
	}
	virtual ~Circle() {} //Circle 소멸자 함수
	virtual void draw() { //순수 가상 함수 구현
		cout << "Circle drawn at : (" << x << "," << y << ")" << endl;
	}
	virtual double getArea() { //순수 가상 함수 구현
		return radius * radius * 3.14;
	}
};

int main() {
	Shape* pS;
	Rectangle r(10, 20, 100, 100);  // (10, 20)위치에 가로 100, 세로 100인 사각형 객체 생성
	pS = &r;
	pS->draw();
	cout << "사각형 면적 = " << pS->getArea() << endl << endl;
	Circle c(120, 150, 40);
	pS = &c;
	pS->draw();
	cout << "원 면적 = " << pS->getArea() << endl << endl;
	return 0;
}

