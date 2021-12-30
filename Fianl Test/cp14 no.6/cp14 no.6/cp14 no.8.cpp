#include <iostream>
#include <string>
using namespace std;

class Object {

public:
	Object() {
		cout << "Object 생성자 호출" << endl;
	}
	virtual ~Object() {
		cout << "Object 소멸자 호출" << endl;
	}
	virtual void equals() = 0;
};

class Book {
	int num;
	string title, author;
public:
	Book(int n, string t, string a) : num(n), title(t), author(a) {
		cout << "Book 생성자 호출" << endl;
	}
	virtual ~Book() {
		cout << "Book 소멸자 호출" << endl;
	}
	virtual void equals(Book *other) {
		if (this->num == other->num) 
			cout << "같은책입니다." << endl;
		else
			cout << "다른책입니다." << endl;
	}
	virtual void getLateFees() = 0;
};

class Novel : public Book {
	int day, fee;
public :
	Novel(int n, string t, string a, int d) :Book(n, t, a), day(d){
		cout << "Novel 생성자 호출" << endl;
	}
	virtual ~Novel() {
		cout << "Novel 소멸자 호출" << endl;
	}
	virtual void getLateFees() {
		fee = 300 * day;
		cout << "연체료는 " << fee << endl;
	}
};
class Poet : public Book {
	int day, fee;
public:
	Poet(int n, string t, string a, int d) :Book(n, t, a), day(d) {
		cout << "Poet 생성자 호출" << endl;
	}
	virtual ~Poet() {
		cout << "Poet 소멸자 호출" << endl;
	}
	virtual void getLateFees() {
		fee = 200 * day;
		cout << "연체료는 " << fee << endl;
	}
};
class SF : public Book {
	int day, fee;
public:
	SF(int n, string t, string a, int d) :Book(n, t, a), day(d) {
		cout << "SF 생성자 호출" << endl;
	}
	virtual ~SF() {
		cout << "SF 소멸자 호출" << endl;
	}
	virtual void getLateFees() {
		fee = 600 * day;
		cout << "연체료는 " << fee << endl;
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