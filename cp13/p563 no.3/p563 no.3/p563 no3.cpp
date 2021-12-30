#include <iostream>
#include <string>
using namespace std;

class Book {												// BookŬ���� ����
	string title;											// ����, ��������, �۰���
	int page;												// private ��������� ����
	string author;
public:
	Book(string a, int b, string c):						// BookŬ������ �Ű����� ������ �Լ�
		title(a), page(b), author(c) {						// : �ʱ�ȭ ��� ���
		cout << "Book ������ ȣ��" << endl;
	}
	~Book() {												// BookŬ���� �Ҹ��� �Լ�
		cout << "Book �Ҹ��� ȣ��" << endl;
	}
	void print() {											// ��� �Լ�
		cout << "������ " << title << endl;					// ���� Ŭ�����ȿ����� private�������
		cout << "������������ " << page << endl;			// ���� ����
		cout << "���ڴ� " << author << endl;
	}
};

class Magazine : public Book {								// BookŬ������ ��ӹ޴� MagazineŬ���� ����
	string open;											// �߸����� private ��������� ����
public:
	Magazine(string a, int b, string c, string d) :			// MagazineŬ������ �Ű����� ������ �Լ�
		Book(a, b, c), open(d) {							// BookŬ���� �������Լ��� �Ű����� ����
		cout << "Magazine ������ ȣ��" << endl;
	}
	~Magazine() {											// MagazineŬ������ �Ҹ��� �Լ�
		cout << "Magazine �Ҹ��� ȣ��" << endl;
	}
	void print() {											// BookŬ������ print()�Լ� overriding
		Book::print();										// BookŬ������ print()�Լ� ȣ��
		cout << "�߸����� " << open << endl;
	}
};
int main() {
	Magazine i("Power C++", 150, "Chun", "2020/06/01");		// MagazineŬ������ ��ü i ������ �ʱ�ȭ

	i.print();												// ��ü i�� ���� ���

	system("pause");
	return 0;
}