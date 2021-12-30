#include <iostream>
using namespace std;

class Triangle {							// Triangle 클래스 선언
	double side, height, area;				// 밑면, 높이, 면적 멤버 변수 선언
											// private 접근 지정자 생략
public:										// 외부 접근 허용
	double get_side();						// 밑면의 접근자 함수원형
	double get_height();					// 높이의 접근자 함수원형
	double get_area();						// 면적의 접근자 함수원형
	void set_side(double a);				// 밑면의 설정자 함수원형
	void set_height(double b);				// 높이의 설정자 함수원형
	void getArea();							// 삼각형의 면적을 구하는 함수원형
};	
											// 클래스 외부에 함수 정의
double Triangle::get_side() {				// 밑면의 접근자 함수
	return side;
}
double Triangle::get_height() {				// 높이의 접근자 함수
	return height;
}
double Triangle::get_area() {				// 면적의 접근자 함수
	return area;
}
void Triangle::set_side(double a) {			// 밑면의 설정자 함수
	side = a;								// 매개변수로 받은 값을 side에 저장
}
void Triangle::set_height(double b) {		// 높이의 설정자 함수
	height = b;								// 매개변수로 받은 값을 height에 저장
}
void Triangle::getArea() {					// 삼각형의 면적을 구하는 함수
	area = 0.5 * height * side;				// 삼각형 넓이 공식
}

int main() {
	Triangle semo1;							// Triangle 클래스의 semo1 객체 생성

	semo1.set_side(7.6);					// 밑면 간접적 초기화
	semo1.set_height(4.1);					// 높이 간접적 초기화
	semo1.getArea();						// 삼각형의 면적 계산
	cout << "삼각형의 밑변: " << semo1.get_side() << endl;			// 밑변 출력
	cout << "삼각형의 높이: " << semo1.get_height() << endl;		// 높이 출력
	cout << "삼각형의 면적: " << semo1.get_area() << endl;			// 면적 출력

	system("pause");
	return 0;
}