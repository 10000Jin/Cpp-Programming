#include <iostream>
#include <string>
using namespace std;

class Person {												// Person Ŭ���� ����													// 
	string name;											// �̸�, �ּ�, ��ȭ��ȣ�� 
	string address;											// private ��������� ����
	string pnumber;
public:
	Person(string a, string b, string c) :					// PersonŬ������ �Ű����� ������
		name(a), address(b), pnumber(c) {
		cout << "Person ������ ȣ��" << endl;
	}
	~Person() {												// PersonŬ������ �Ҹ���
		cout << "Person �Ҹ��� ����" << endl;
	}
	string get_name() { return name; }						// ����������� �����ڿ� ������ �Լ�
	void set_name(string x) { name = x; }
	string get_address() { return address; }
	void set_address(string y) { name = y; }
	string get_pnumber() { return pnumber; }
	void set_pnumger(string z) { name = z; }
};

class Customer :public Person {								// PersonŬ������ ��ӹ޴� CustomerŬ����
	int cnumber;											// ����ȣ, ���ϸ�����
	int mileage;											// private ��������� ����
public:
	Customer(string a, string b, string c, int e, int f) :	// CustomerŬ������ �Ű����� ������
		Person(a, b, c), cnumber(e), mileage(f) {			// PersonŬ������ ���� �ʱ�ȭ�� 
		cout << "Customer ������ ȣ��" << endl;				// CustomerŬ���� ���� �ʱ�ȭ
	}
	~Customer() {
		cout << "Customer �Ҹ��� ȣ��" << endl;				// CustomerŬ������ �Ҹ���
	}
	int get_cnumber() { return cnumber; }					// ����������� �����ڿ� ������ �Լ�
	void set_cnumger(int w) { cnumber = w; }
	int get_mileage() { return mileage; }
	void set_mileage(int r) { mileage = r; }
};

int main() {
	Customer c("Choi", "MyHome", "010-1234-5678", 1234, 6789);	// CustomerŬ������ ��ü c ������ �ʱ�ȭ
	
	cout << "�̸��� " << c.get_name() << endl;					// getter�Լ��� ���� private ��������� ����
	cout << "�ּҴ� " << c.get_address() << endl;
	cout << "��ȭ��ȣ�� " << c.get_pnumber() << endl;
	cout << "����ȣ�� " << c.get_cnumber() << endl;
	cout << "���ϸ����� " << c.get_mileage() << endl;

	system("pause");
	return 0;
}