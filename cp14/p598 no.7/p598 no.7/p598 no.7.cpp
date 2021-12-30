#include <iostream>
#include <string>
using namespace std;

class Product {														// Product 클래스 생성후
	string name;													// 제품명, 가격 멤버변수 선언
	double price;
public:
	Product(string n, double p) : name(n), price(p) {				// Product 매개변수 생성자
		cout << "Product 생성자 호출" << endl;
	}
	virtual ~Product() {											// Product 소멸자
		cout << "Product 소멸자  호출" << endl;
	}
	void setName(string a) {										// 제품명 설정자 함수
		name = a;
	}
	string getName() {												// 제품명 접근자 함수
		return name;
	}
	void setPrice(double b) {										// 가격 설정자 함수
		price = b;
	}
	virtual double getPrice() {										// 가격 접근자 함수
		return price;
	}
	virtual void print() {											// 제품명과 가격을 출력하는 함수
		cout << "제품명: " << name << " 가격: " << price << endl;
	}
};

class Discountproduct : public Product {							// Product를 상속받는 Discountproduct클래스
	double discount;												// 할인율 멤버변수 선언
public:
	Discountproduct(string n, double p, double d) : Product(n, p), discount(d) {		// Discountproduct 매개변수 생성자
		cout << "Discountproduct 생성자 호출" << endl;
	}
	virtual ~Discountproduct() {									// Discountproduct 소멸자
		cout << "Discountproduct 소멸자 호출" << endl;
	}
	void setDiscount(double c) {									// 할인율 설정자
		discount = c;
	}
	double getDiscount() {											// 할인율 접근자
		return discount;
	}
	virtual double getPrice() {										// 할인가격을 계산 (재정의)
		double price2;						
		price2 = Product::getPrice();								// 원래 가격을 price2에 저장
		return price2 * (1 - discount / 100);						// 할인가격 반환
	}
	virtual void print() {											// 제품명과 할인가격 출력 함수(재정의) 
		cout << "제품명: " << getName() << " 할인가격: " << getPrice() << endl;
	}
};

int main() {
	Product* p1 = new Product("toothbrush", 3000);					// 동적으로 p1객체 생성후 주소 저장
	Product* p2 = new Discountproduct("toothbrush", 3000, 15);		// 상향 형변환

	cout << p1->getPrice() << endl;									// p1객체의 가격 접근자 호출
	cout << p2->getPrice() << endl;									// p2객체의 가격 접근자 호출
										// getPrice는 가상함수이므로 p2가 가르키는 Discountproduct클래스의 getPrice() 호출
	p1->print();													// p1객체의 제품명, 가격 출력함수 호출
	p2->print();													// p2객체의 제품명, 할인가격 출력함수 호출
										// print()는 가상함수이므로 p2가 가르키는 Discountproduct클래스의 print() 호출
	delete p1;														// p1객체 메모리 반납
	delete p2;														// p2객체 메모리 반납

	system("pause");
	return 0;
}