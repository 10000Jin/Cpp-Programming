#include <iostream>
#include <string>
using namespace std;

class Shape {

public:
	Shape() {
		cout << "Shape ������ ȣ��" << endl;
	}
	virtual ~Shape() {
		cout << "Shape �Ҹ��� ȣ��" << endl;
	}
	virtual void getArea() = 0;
	virtual void getVolume() = 0;
};
class TwoDimShape : public Shape {

public:
	TwoDimShape() {
		cout << "TwoDimShape ������ ȣ��" << endl;
	}
	virtual ~TwoDimShape() {
		cout << "TwoDimShape �Ҹ��� ȣ��" << endl;
	}
};
class ThreeDimShape : public Shape {

public:
	ThreeDimShape() {
		cout << "ThreeDimShape ������ ȣ��" << endl;
	}
	virtual ~ThreeDimShape() {
		cout << "ThreeDimShape �Ҹ��� ȣ��" << endl;
	}


};
class Ellipse : public TwoDimShape {

public:
	Ellipse() {
		cout << "Ellipse ������ ȣ��" << endl;
	}
	virtual ~Ellipse() {
		cout << "Ellipse �Ҹ��� ȣ��" << endl;
	}
	virtual void getArea() {
		cout << "Ÿ���� ���� ���" << endl;
	}

};
class Rectangle : public TwoDimShape {

public:
	Rectangle() {
		cout << "Rectangle ������ ȣ��" << endl;
	}
	virtual ~Rectangle() {
		cout << "Rectangle �Ҹ��� ȣ��" << endl;
	}
	virtual void getArea() {
		cout << "�簢���� ���� ���" << endl;
	}

};
class Shpere : public ThreeDimShape {

public:
	Shpere() {
		cout << "Shpere ������ ȣ��" << endl;
	}
	virtual ~Shpere() {
		cout << "Shpere �Ҹ��� ȣ��" << endl;
	}
	virtual void getVolume() {
		cout << "���� ü�� ���" << endl;
	}
};
class Cube : public ThreeDimShape {

public:
	Cube() {
		cout << "Cube ������ ȣ��" << endl;
	}
	virtual ~Cube() {
		cout << "Cube �Ҹ��� ȣ��" << endl;
	}
	virtual void getVolume() {
		cout << "������ü�� ü�� ���" << endl;
	}
};
int main() {
	


}