#include <iostream>
#include <string>
using namespace std;

class Person {												// Person 클래스 선언													// 
	string name;											// 이름, 주소, 전화번호를 
	string address;											// private 멤버변수로 선언
	string pnumber;
public:
	Person(string a, string b, string c) :					// Person클래스의 매개변수 생성자
		name(a), address(b), pnumber(c) {
		cout << "Person 생성자 호출" << endl;
	}
	~Person() {												// Person클래스의 소멸자
		cout << "Person 소멸자 생성" << endl;
	}
	string get_name() { return name; }						// 멤버변수들의 접근자와 설정자 함수
	void set_name(string x) { name = x; }
	string get_address() { return address; }
	void set_address(string y) { name = y; }
	string get_pnumber() { return pnumber; }
	void set_pnumger(string z) { name = z; }
};

class Customer :public Person {								// Person클래스를 상속받는 Customer클래스
	int cnumber;											// 고객번호, 마일리지를
	int mileage;											// private 멤버변수로 선언
public:
	Customer(string a, string b, string c, int e, int f) :	// Customer클래스의 매개변수 생성자
		Person(a, b, c), cnumber(e), mileage(f) {			// Person클래스의 변수 초기화후 
		cout << "Customer 생성자 호출" << endl;				// Customer클래스 변수 초기화
	}
	~Customer() {
		cout << "Customer 소멸자 호출" << endl;				// Customer클래스의 소멸자
	}
	int get_cnumber() { return cnumber; }					// 멤버변수들의 접근자와 설정자 함수
	void set_cnumger(int w) { cnumber = w; }
	int get_mileage() { return mileage; }
	void set_mileage(int r) { mileage = r; }
};

int main() {
	Customer c("Choi", "MyHome", "010-1234-5678", 1234, 6789);	// Customer클래스의 객체 c 생성후 초기화
	
	cout << "이름은 " << c.get_name() << endl;					// getter함수를 통해 private 멤버변수에 접근
	cout << "주소는 " << c.get_address() << endl;
	cout << "전화번호는 " << c.get_pnumber() << endl;
	cout << "고객번호는 " << c.get_cnumber() << endl;
	cout << "마일리지는 " << c.get_mileage() << endl;

	system("pause");
	return 0;
}