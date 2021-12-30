#include <iostream>
#include <string>
using namespace std;
#define Pi 3.14														// #define�� ����� ��� ����

class Shape {														// Shape Ŭ���� ������
	string name;													// ������ ������� ����
public:
	Shape(string a) : name(a) {										// Shape �Ű����� ������
		cout << "Shape ������ ȣ��" << endl;
	}
	virtual double getSurfaceArea() = 0;							// ������ ǥ������ ���ϴ� �����Լ� 
	string get_name() {												// �������� ������ �Լ�
		return name;
	}
	virtual ~Shape() {												// Shape �Ҹ���
		cout << "Shape �Ҹ��� ȣ��" << endl;
	}
};

class Sphere : public Shape {										// Shape�� ��ӹ޴� Sphehre Ŭ���� ����
	double radious;													// ������ ������� ����
public:
	Sphere(string a, double r) : Shape(a = "��"), radious(r){		// Sphere �Ű����� ������
		cout << "Sphere ������ ȣ��" << endl;
	}
	virtual double getSurfaceArea() {								// ���� ǥ������ ���ϴ� �Լ� (������)
		return 4 * Pi * radious * radious;
	}
	virtual ~Sphere() {												// Sphere �Ҹ���
		cout << "Sphere �Ҹ��� ȣ��" << endl;
	}
};

class Cube : public Shape {											// Shape�� ��ӹ޴� Cube Ŭ���� ����
	double horizontal;												// ����, ����, ���� ������� ����
	double vertical;
	double height;
public:
	Cube(string a, double h, double v, double hi) : Shape(a = "������ü"),		// Cube �Ű����� ������
		horizontal(h), vertical(v), height(hi) {
		cout << "Cube ������ ȣ��" << endl;
	}
	virtual double getSurfaceArea() {											// ������ü�� ǥ������ ���ϴ� �Լ� (������)
		return 2 * (horizontal * vertical + vertical * height + horizontal * height);
	}
	virtual ~Cube() {															// Cube �Ҹ���
		cout << "Cube �Ҹ��� ȣ��" << endl;
	}
};

class Cylinder : public Shape {										// Shape�� ��ӹ޴� Cylinder Ŭ���� ����
	double radious;													// ������, ���� ������� ����
	double height;
public:
	Cylinder(string a, double r, double hi) : Shape(a = "�����"),	// Cylinder �Ű����� ������
		radious(r), height(hi) {
		cout << "Cylinder ������ ȣ��" << endl;
	}
	virtual double getSurfaceArea() {								// ������� ǥ������ ���ϴ� �Լ� (������)
		return 2 * Pi * radious * (height + radious);
	}
	virtual ~Cylinder() {											// Cylinder �Ҹ���
		cout << "Cylinder �Ҹ��� ȣ��" << endl;
	}
};

int main() {
	Shape *array[3];												// ���� 3���� Shape Ŭ������ ������ �迭 ��ü
																	// ���� ����ȯ
	array[0] = new Sphere("", 2);									// �� �濡 �޸� �����Ҵ��� �ڽ� Ŭ���� ��ü �ʱ�ȭ
	array[1] = new Cube("", 2, 3, 4);
	array[2] = new Cylinder("", 2, 3);

	for (int i = 0; i < 3; i++) {									// for���� ����Ͽ� ��, ������ü, ����� ǥ���� ���
		cout << array[i]->get_name() << "�� ǥ������ " << 
		array[i]->getSurfaceArea() << endl;
	}
	for (int i = 0; i < 3; i++) {									// for���� ����Ͽ� �޸� �ݳ�
		delete array[i];
	}

	system("pause");
	return 0;
}