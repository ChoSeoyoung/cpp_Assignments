#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> v; //int값만 다루는 벡터 생성

	v.push_back(1); //벡터에 정수 1 삽입
	v.push_back(2); //벡터에 정수 2 삽입
	v.push_back(3); //벡터에 정수 3 삽입

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}
	cout << endl;

	v[0] = 10;
	int m = v[2]; //m에 3저장
	v.at(2) = 5; //벡터의 3번째 원소를 5로 변경

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}
	cout << endl;
	return 0;
}