#include <iostream>
#include <string>
using namespace std;
#define Pi 3.14														// #define을 사용해 상수 정의

class Shape {														// Shape 클래스 생성후
	string name;													// 도형명 멤버변수 선언
public:
	Shape(string a) : name(a) {										// Shape 매개변수 생성자
		cout << "Shape 생성자 호출" << endl;
	}
	virtual double getSurfaceArea() = 0;							// 도형의 표면적을 구하는 가상함수 
	string get_name() {												// 도형명의 설정자 함수
		return name;
	}
	virtual ~Shape() {												// Shape 소멸자
		cout << "Shape 소멸자 호출" << endl;
	}
};

class Sphere : public Shape {										// Shape를 상속받는 Sphehre 클래스 생성
	double radious;													// 반지름 멤버변수 선언
public:
	Sphere(string a, double r) : Shape(a = "구"), radious(r){		// Sphere 매개변수 생성자
		cout << "Sphere 생성자 호출" << endl;
	}
	virtual double getSurfaceArea() {								// 구의 표면적을 구하는 함수 (재정의)
		return 4 * Pi * radious * radious;
	}
	virtual ~Sphere() {												// Sphere 소멸자
		cout << "Sphere 소멸자 호출" << endl;
	}
};

class Cube : public Shape {											// Shape를 상속받는 Cube 클래스 생성
	double horizontal;												// 가로, 세로, 높이 멤버변수 선언
	double vertical;
	double height;
public:
	Cube(string a, double h, double v, double hi) : Shape(a = "직육면체"),		// Cube 매개변수 생성자
		horizontal(h), vertical(v), height(hi) {
		cout << "Cube 생성자 호출" << endl;
	}
	virtual double getSurfaceArea() {											// 직육면체의 표면적을 구하는 함수 (재정의)
		return 2 * (horizontal * vertical + vertical * height + horizontal * height);
	}
	virtual ~Cube() {															// Cube 소멸자
		cout << "Cube 소멸자 호출" << endl;
	}
};

class Cylinder : public Shape {										// Shape를 상속받는 Cylinder 클래스 생성
	double radious;													// 반지름, 높이 멤버변수 선언
	double height;
public:
	Cylinder(string a, double r, double hi) : Shape(a = "원기둥"),	// Cylinder 매개변수 생성자
		radious(r), height(hi) {
		cout << "Cylinder 생성자 호출" << endl;
	}
	virtual double getSurfaceArea() {								// 원기둥의 표면적을 구하는 함수 (재정의)
		return 2 * Pi * radious * (height + radious);
	}
	virtual ~Cylinder() {											// Cylinder 소멸자
		cout << "Cylinder 소멸자 호출" << endl;
	}
};

int main() {
	Shape *array[3];												// 방이 3개인 Shape 클래스의 포인터 배열 객체
																	// 상향 형변환
	array[0] = new Sphere("", 2);									// 각 방에 메모리 동적할당한 자식 클래스 객체 초기화
	array[1] = new Cube("", 2, 3, 4);
	array[2] = new Cylinder("", 2, 3);

	for (int i = 0; i < 3; i++) {									// for문을 사용하여 구, 직육면체, 원기둥 표면적 출력
		cout << array[i]->get_name() << "의 표면적은 " << 
		array[i]->getSurfaceArea() << endl;
	}
	for (int i = 0; i < 3; i++) {									// for문을 사용하여 메모리 반납
		delete array[i];
	}

	system("pause");
	return 0;
}