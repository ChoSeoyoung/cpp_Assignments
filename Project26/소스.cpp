#include <iostream>
#include <vector>
using namespace std;

double static sum = 0; //������ �� ������ ����

class Shape {
protected:
	int x, y; //��ġ ������ ��Ÿ���z (x,y)
public:
	Shape(int x, int y) {
		this->x = x;
		this->y = y;
	}
	virtual ~Shape() {}
	virtual void draw() = 0;
	virtual double getArea() = 0;
};

class Circle : public Shape {
	int radius; //�������� ��Ÿ���� radius
public:
	Circle(int x, int y, int radius) :Shape(x, y) {
		this->radius = radius;
	}
	virtual ~Circle() {}
	void draw() {
		cout << "Circle: (" << radius << ") drawn at:(" << x << "," << y << ")" << endl;
	}
	double getArea() {
		double area = 3.14 * radius * radius;
		sum += area;
		return area;
	}
};

class Rectangle : public Shape {
	int width,height; //width(����)������ height(����)����
public:
	Rectangle(int x, int y, int width, int height) :Shape(x, y) {
		this->width = width;
		this->height = height;
	}
	virtual ~Rectangle() {}
	void draw() {
		cout << "Rectangle: (" << width<<","<<height << ") drawn at:(" << x << "," << y << ")" << endl;
	}
	double getArea() {
		double area = width * height;
		sum += area;
		return sum;
	}
};

int main() {
	vector<Shape*> vShape;
	vShape.push_back(new Rectangle(10, 10, 30, 40)); // 10,10 ��ġ�� ���μ��� 30x40
	vShape.push_back(new Circle(30, 30, 5));  // 30,30 ��ġ�� ������ 5�� ��
	vShape.push_back(new Rectangle(20, 30, 10, 10));
	
	for(auto it=vShape.begin();it!=vShape.end();it++){
		(*it)->draw();
		(*it)->getArea();
	}
	
	cout << "Total area: " << sum << endl;

	return 0;
}