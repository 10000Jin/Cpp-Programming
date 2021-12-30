#include <iostream>
#include <string>
using namespace std;

class Food {											// FoodŬ���� ����
	string calorie;										// Į�θ�, ����, ���Ը�
	string price;										// private ��������� ����
	string weight;
public:
	Food(string a, string b, string c):					// FoodŬ������ �Ű����� ������ �Լ�
		calorie(a), price(b), weight(c) {				// : �ʱ�ȭ ��� ���
		cout << "Food ������ ȣ��" << endl;
	}
	~Food() {											// FoodŬ���� �Ҹ��� �Լ�
		cout << "Food �Ҹ��� ȣ��" << endl;
	}
	void print() {										// ��� �Լ�
		cout << "Į�θ��� " << calorie << endl;			// ���� Ŭ�����ȿ����� private�������
		cout << "������ " << price << endl;				// ���� ����
		cout << "�߷��� " << weight << endl;
	}
};

class Melon : public Food {								// FoodŬ������ ��ӹ޴� MelonŬ���� ����
	string farm;										// ������ private ��������� ����
public:
	Melon(string a, string b, string c, string d):		// MelonŬ������ �Ű����� ������ �Լ�
	Food(a, b, c), farm(d) {							// FoodŬ���� �������Լ��� �Ű����� ����
		cout << "Melon ������ ȣ��" << endl;
	}
	~Melon() {											// MelonŬ������ �Ҹ��� �Լ�
		cout << "Melon �Ҹ��� ȣ��" << endl;
	}
	void print() {										// FoodŬ������ print()�Լ� overriding
		Food::print();									// FoodŬ������ print()�Լ� ȣ��
		cout << "���� ��� �ּҴ�  " << farm << endl;
	}
};
int main() {
	Melon i("650 kcal", "80$", "1.5Kg", "Somewhere");	// MelonŬ������ ��ü i ������ �ʱ�ȭ

	i.print();											// ��ü i�� ���� print()�Լ� ȣ��

	system("pause");
	return 0;
}