#include <iostream>
using namespace std;

class Triangle {							// Triangle Ŭ���� ����
	double side, height, area;				// �ظ�, ����, ���� ��� ���� ����
											// private ���� ������ ����
public:										// �ܺ� ���� ���
	double get_side();						// �ظ��� ������ �Լ�����
	double get_height();					// ������ ������ �Լ�����
	double get_area();						// ������ ������ �Լ�����
	void set_side(double a);				// �ظ��� ������ �Լ�����
	void set_height(double b);				// ������ ������ �Լ�����
	void getArea();							// �ﰢ���� ������ ���ϴ� �Լ�����
};	
											// Ŭ���� �ܺο� �Լ� ����
double Triangle::get_side() {				// �ظ��� ������ �Լ�
	return side;
}
double Triangle::get_height() {				// ������ ������ �Լ�
	return height;
}
double Triangle::get_area() {				// ������ ������ �Լ�
	return area;
}
void Triangle::set_side(double a) {			// �ظ��� ������ �Լ�
	side = a;								// �Ű������� ���� ���� side�� ����
}
void Triangle::set_height(double b) {		// ������ ������ �Լ�
	height = b;								// �Ű������� ���� ���� height�� ����
}
void Triangle::getArea() {					// �ﰢ���� ������ ���ϴ� �Լ�
	area = 0.5 * height * side;				// �ﰢ�� ���� ����
}

int main() {
	Triangle semo1;							// Triangle Ŭ������ semo1 ��ü ����

	semo1.set_side(7.6);					// �ظ� ������ �ʱ�ȭ
	semo1.set_height(4.1);					// ���� ������ �ʱ�ȭ
	semo1.getArea();						// �ﰢ���� ���� ���
	cout << "�ﰢ���� �غ�: " << semo1.get_side() << endl;			// �غ� ���
	cout << "�ﰢ���� ����: " << semo1.get_height() << endl;		// ���� ���
	cout << "�ﰢ���� ����: " << semo1.get_area() << endl;			// ���� ���

	system("pause");
	return 0;
}