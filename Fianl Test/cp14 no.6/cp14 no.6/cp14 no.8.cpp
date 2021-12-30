#include <iostream>
#include <string>
using namespace std;

class Object {

public:
	Object() {
		cout << "Object ������ ȣ��" << endl;
	}
	virtual ~Object() {
		cout << "Object �Ҹ��� ȣ��" << endl;
	}
	virtual void equals() = 0;
};

class Book {
	int num;
	string title, author;
public:
	Book(int n, string t, string a) : num(n), title(t), author(a) {
		cout << "Book ������ ȣ��" << endl;
	}
	virtual ~Book() {
		cout << "Book �Ҹ��� ȣ��" << endl;
	}
	virtual void equals(Book *other) {
		if (this->num == other->num) 
			cout << "����å�Դϴ�." << endl;
		else
			cout << "�ٸ�å�Դϴ�." << endl;
	}
	virtual void getLateFees() = 0;
};

class Novel : public Book {
	int day, fee;
public :
	Novel(int n, string t, string a, int d) :Book(n, t, a), day(d){
		cout << "Novel ������ ȣ��" << endl;
	}
	virtual ~Novel() {
		cout << "Novel �Ҹ��� ȣ��" << endl;
	}
	virtual void getLateFees() {
		fee = 300 * day;
		cout << "��ü��� " << fee << endl;
	}
};
class Poet : public Book {
	int day, fee;
public:
	Poet(int n, string t, string a, int d) :Book(n, t, a), day(d) {
		cout << "Poet ������ ȣ��" << endl;
	}
	virtual ~Poet() {
		cout << "Poet �Ҹ��� ȣ��" << endl;
	}
	virtual void getLateFees() {
		fee = 200 * day;
		cout << "��ü��� " << fee << endl;
	}
};
class SF : public Book {
	int day, fee;
public:
	SF(int n, string t, string a, int d) :Book(n, t, a), day(d) {
		cout << "SF ������ ȣ��" << endl;
	}
	virtual ~SF() {
		cout << "SF �Ҹ��� ȣ��" << endl;
	}
	virtual void getLateFees() {
		fee = 600 * day;
		cout << "��ü��� " << fee << endl;
	}
};

int main() {

	Book* b1 = new Novel(1, "ASD", "kim", 20);
	Book* b2 = new Novel(1, "ASD", "kim", 20);
	Book* b3 = new Poet(2, "QWER", "lee", 40);
	Book* b4 = new SF(3, "ZXC", "choi", 10);

	b1->equals(b2);
	b3->equals(b4);

	b1->getLateFees();
	b2->getLateFees();
	b3->getLateFees();
	b4->getLateFees();

	delete b1;
	delete b2;
	delete b3;
	delete b4;

	return 0;
}