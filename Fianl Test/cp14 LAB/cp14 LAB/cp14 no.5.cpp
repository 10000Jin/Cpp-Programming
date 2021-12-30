#include <iostream>
#include <string>
using namespace std;

class Shape {

public:
	Shape() {
		cout << "Shape 생성자 호출" << endl;
	}
	virtual ~Shape() {
		cout << "Shape 소멸자 호출" << endl;
	}
	virtual void getArea() = 0;
	virtual void getVolume() = 0;
};
class TwoDimShape : public Shape {

public:
	TwoDimShape() {
		cout << "TwoDimShape 생성자 호출" << endl;
	}
	virtual ~TwoDimShape() {
		cout << "TwoDimShape 소멸자 호출" << endl;
	}
};
class ThreeDimShape : public Shape {

public:
	ThreeDimShape() {
		cout << "ThreeDimShape 생성자 호출" << endl;
	}
	virtual ~ThreeDimShape() {
		cout << "ThreeDimShape 소멸자 호출" << endl;
	}


};
class Ellipse : public TwoDimShape {

public:
	Ellipse() {
		cout << "Ellipse 생성자 호출" << endl;
	}
	virtual ~Ellipse() {
		cout << "Ellipse 소멸자 호출" << endl;
	}
	virtual void getArea() {
		cout << "타원의 면적 출력" << endl;
	}

};
class Rectangle : public TwoDimShape {

public:
	Rectangle() {
		cout << "Rectangle 생성자 호출" << endl;
	}
	virtual ~Rectangle() {
		cout << "Rectangle 소멸자 호출" << endl;
	}
	virtual void getArea() {
		cout << "사각형의 면적 출력" << endl;
	}

};
class Shpere : public ThreeDimShape {

public:
	Shpere() {
		cout << "Shpere 생성자 호출" << endl;
	}
	virtual ~Shpere() {
		cout << "Shpere 소멸자 호출" << endl;
	}
	virtual void getVolume() {
		cout << "구의 체적 출력" << endl;
	}
};
class Cube : public ThreeDimShape {

public:
	Cube() {
		cout << "Cube 생성자 호출" << endl;
	}
	virtual ~Cube() {
		cout << "Cube 소멸자 호출" << endl;
	}
	virtual void getVolume() {
		cout << "직육면체의 체적 출력" << endl;
	}
};
int main() {
	


}