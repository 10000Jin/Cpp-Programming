#include <iostream>
#include <string>
using namespace std;

class Product {														// Product Ŭ���� ������
	string name;													// ��ǰ��, ���� ������� ����
	double price;
public:
	Product(string n, double p) : name(n), price(p) {				// Product �Ű����� ������
		cout << "Product ������ ȣ��" << endl;
	}
	virtual ~Product() {											// Product �Ҹ���
		cout << "Product �Ҹ���  ȣ��" << endl;
	}
	void setName(string a) {										// ��ǰ�� ������ �Լ�
		name = a;
	}
	string getName() {												// ��ǰ�� ������ �Լ�
		return name;
	}
	void setPrice(double b) {										// ���� ������ �Լ�
		price = b;
	}
	virtual double getPrice() {										// ���� ������ �Լ�
		return price;
	}
	virtual void print() {											// ��ǰ��� ������ ����ϴ� �Լ�
		cout << "��ǰ��: " << name << " ����: " << price << endl;
	}
};

class Discountproduct : public Product {							// Product�� ��ӹ޴� DiscountproductŬ����
	double discount;												// ������ ������� ����
public:
	Discountproduct(string n, double p, double d) : Product(n, p), discount(d) {		// Discountproduct �Ű����� ������
		cout << "Discountproduct ������ ȣ��" << endl;
	}
	virtual ~Discountproduct() {									// Discountproduct �Ҹ���
		cout << "Discountproduct �Ҹ��� ȣ��" << endl;
	}
	void setDiscount(double c) {									// ������ ������
		discount = c;
	}
	double getDiscount() {											// ������ ������
		return discount;
	}
	virtual double getPrice() {										// ���ΰ����� ��� (������)
		double price2;						
		price2 = Product::getPrice();								// ���� ������ price2�� ����
		return price2 * (1 - discount / 100);						// ���ΰ��� ��ȯ
	}
	virtual void print() {											// ��ǰ��� ���ΰ��� ��� �Լ�(������) 
		cout << "��ǰ��: " << getName() << " ���ΰ���: " << getPrice() << endl;
	}
};

int main() {
	Product* p1 = new Product("toothbrush", 3000);					// �������� p1��ü ������ �ּ� ����
	Product* p2 = new Discountproduct("toothbrush", 3000, 15);		// ���� ����ȯ

	cout << p1->getPrice() << endl;									// p1��ü�� ���� ������ ȣ��
	cout << p2->getPrice() << endl;									// p2��ü�� ���� ������ ȣ��
										// getPrice�� �����Լ��̹Ƿ� p2�� ����Ű�� DiscountproductŬ������ getPrice() ȣ��
	p1->print();													// p1��ü�� ��ǰ��, ���� ����Լ� ȣ��
	p2->print();													// p2��ü�� ��ǰ��, ���ΰ��� ����Լ� ȣ��
										// print()�� �����Լ��̹Ƿ� p2�� ����Ű�� DiscountproductŬ������ print() ȣ��
	delete p1;														// p1��ü �޸� �ݳ�
	delete p2;														// p2��ü �޸� �ݳ�

	system("pause");
	return 0;
}