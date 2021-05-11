#include <iostream>
using namespace std;

/*
	순수 가상 함수(pure vㅑrtual function): 함수의 코드가 없고 선언만 있는 가상 함수
	-멤버 함수의 원형 뒤에 =0;으로 선언
	추상 클래스(abstract class): 순수 가상 함수를 하나라도 포함한 함수
	-추상 클래스는 객체를 선언할 수 없으나, 포인터를 선언하는 것은 가능하다.
*/

class Calculator { //추상클래스 Calculator
public:
	virtual int add(int a, int b) = 0; //두 정수의 합 리턴
	virtual int subtract(int a, int b) = 0; //두 정수의 차 리턴
	virtual double average(int a[], int size) = 0; //a의 평균 리턴, size는 배열 크기
};

class GoodCalc : public Calculator { //추상클래스 구현
public:
	int add(int a, int b) { return a + b; }
	int subtract(int a, int b) { return a - b;}
	double average(int a[], int size) {
		double sum = 0;
		for (int i = 0; i < size; i++)
			sum += a[i];
		return sum/size;
	}
};

int main() {
	int a[] = { 1,2,3,4,5 };
	Calculator* p = new GoodCalc();
	cout << p->add(2, 3) << endl;
	cout << p->subtract(2, 3) << endl;
	cout << p->average(a, 5) << endl;
	delete p;
}

