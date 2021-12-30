#include <iostream>
#include <string>
using namespace std;

class Food {											// Food클래스 선언
	string calorie;										// 칼로리, 가격, 무게를
	string price;										// private 멤버변수로 선언
	string weight;
public:
	Food(string a, string b, string c):					// Food클래스의 매개변수 생성자 함수
		calorie(a), price(b), weight(c) {				// : 초기화 방법 사용
		cout << "Food 생성자 호출" << endl;
	}
	~Food() {											// Food클래스 소멸자 함수
		cout << "Food 소멸자 호출" << endl;
	}
	void print() {										// 출력 함수
		cout << "칼로리는 " << calorie << endl;			// 같은 클래스안에서는 private멤버변수
		cout << "가격은 " << price << endl;				// 접근 가능
		cout << "중량은 " << weight << endl;
	}
};

class Melon : public Food {								// Food클래스를 상속받는 Melon클래스 선언
	string farm;										// 농장을 private 멤버변수로 선언
public:
	Melon(string a, string b, string c, string d):		// Melon클래스의 매개변수 생성자 함수
	Food(a, b, c), farm(d) {							// Food클래스 생성자함수에 매개변수 전달
		cout << "Melon 생성자 호출" << endl;
	}
	~Melon() {											// Melon클래스의 소멸자 함수
		cout << "Melon 소멸자 호출" << endl;
	}
	void print() {										// Food클래스의 print()함수 overriding
		Food::print();									// Food클래스의 print()함수 호출
		cout << "경작 농원 주소는  " << farm << endl;
	}
};
int main() {
	Melon i("650 kcal", "80$", "1.5Kg", "Somewhere");	// Melon클래스의 객체 i 생성후 초기화

	i.print();											// 객체 i에 대한 print()함수 호출

	system("pause");
	return 0;
}