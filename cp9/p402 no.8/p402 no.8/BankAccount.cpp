// BankAccount 클래스 정의부

#include <iostream>
#include <string>
#include "BankAccount.h"						// BankAccount 헤더파일 include
using namespace std;

void BankAccount::setBalance(int amount) {		// 잔액 설정자 함수
	balance = amount;
}
int BankAccount::getBalance() {					// 잔액 접근자 함수
	return balance;
}
void BankAccount::deposit(int amount) {			// 저금하는 함수
	balance += amount;
}
void BankAccount::withdraw(int amount) {		// 인출하는 함수
	balance -= amount;
}
void BankAccount::print() {						// 첫번째 계좌 출력 함수
	cout << "계좌1의 잔액은 " << balance << "입니다." << endl;
}
void BankAccount::print2() {					// 두번째 계좌 출력 함수
	cout << "계좌2의 잔액은 " << balance << "입니다." << endl;
}
												// 계좌1에서 계좌2로 송금하는 함수
void BankAccount::transfer(int amount, BankAccount &other) {		// 레퍼런스 사용
	other.balance -= amount;					// 계좌2에서 amount 뺌
	balance += amount;							// 계좌1에서 amount 더함
}