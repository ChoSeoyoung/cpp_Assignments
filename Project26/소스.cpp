#include <iostream>
#include <vector>
using namespace std;

double static sum = 0; //도형의 총 면적을 저장

class Shape {
protected:
	int x, y; //위치 정보를 나타내틑 (x,y)
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
	int radius; //반지름을 나타내는 radius
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
	int width,height; //width(가로)정보와 height(세로)정보
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
	vShape.push_back(new Rectangle(10, 10, 30, 40)); // 10,10 위치에 가로세로 30x40
	vShape.push_back(new Circle(30, 30, 5));  // 30,30 위치에 반지름 5인 원
	vShape.push_back(new Rectangle(20, 30, 10, 10));
	
	for(auto it=vShape.begin();it!=vShape.end();it++){
		(*it)->draw();
		(*it)->getArea();
	}
	
	cout << "Total area: " << sum << endl;

	return 0;
}