// BankAQccount 클래스 선언부

#include <iostream>
#include <string>					
using namespace std;

class BankAccount {						// BankAccount 클래스 선언
	int accontNumber;					// 계좌 번호 멤버 변수
	string owner;						// 예금주 멤버 변수
	int balance;						// 잔액 멤버 변수
										// private 접근 지정자 생략
public:									// 외부 접근 허용
	void setBalance(int amount);		// 잔액 설정자 함수원형
	int getBalance();					// 잔약 접근자 함수원형
	void deposit(int amount);			// 저금하는 함수원형
	void withdraw(int amount);			// 인출하는 함수원형
	void print();						// 첫번째 계좌 출력 함수원형
	void print2();						// 두번쨰 계좌 출력 함수원형
	void transfer(int amount, BankAccount &other);
};										// 계좌1에서 계좌2로 송금하는 함수원형