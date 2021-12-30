#include <iostream>
#include <string>
using namespace std;

class Book {												// Book클래스 선언
	string title;											// 제목, 페이지수, 작가를
	int page;												// private 멤버변수로 선언
	string author;
public:
	Book(string a, int b, string c):						// Book클래스의 매개변수 생성자 함수
		title(a), page(b), author(c) {						// : 초기화 방법 사용
		cout << "Book 생성자 호출" << endl;
	}
	~Book() {												// Book클래스 소멸자 함수
		cout << "Book 소멸자 호출" << endl;
	}
	void print() {											// 출력 함수
		cout << "제목은 " << title << endl;					// 같은 클래스안에서는 private멤버변수
		cout << "총페이지수는 " << page << endl;			// 접근 가능
		cout << "저자는 " << author << endl;
	}
};

class Magazine : public Book {								// Book클래스를 상속받는 Magazine클래스 선언
	string open;											// 발매일을 private 멤버변수로 선언
public:
	Magazine(string a, int b, string c, string d) :			// Magazine클래스의 매개변수 생성자 함수
		Book(a, b, c), open(d) {							// Book클래스 생성자함수에 매개변수 전달
		cout << "Magazine 생성자 호출" << endl;
	}
	~Magazine() {											// Magazine클래스의 소멸자 함수
		cout << "Magazine 소멸자 호출" << endl;
	}
	void print() {											// Book클래스의 print()함수 overriding
		Book::print();										// Book클래스의 print()함수 호출
		cout << "발매일은 " << open << endl;
	}
};
int main() {
	Magazine i("Power C++", 150, "Chun", "2020/06/01");		// Magazine클래스의 객체 i 생성후 초기화

	i.print();												// 객체 i의 정보 출력

	system("pause");
	return 0;
}