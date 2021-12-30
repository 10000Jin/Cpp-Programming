// BankAccount 클래스 테스트부

#include <iostream>
#include <string>
#include "BankAccount.h"					// BankAccount 헤더파일 include
using namespace std;

int main() {
	BankAccount account, account2;			// account, account2 객체 생성

	account.setBalance(0);					// 계좌1 잔액 0으로 초기화
	account2.setBalance(8000);				// 계좌2 잔액 8000으로 초기화
	account.deposit(10000);					// 계좌1 10000 저금
	account.print();						// 계좌1 잔액 출력
	account.withdraw(8000);					// 계좌1 8000 인출
	account.print();						// 계좌1 잔액 출력
	account2.print2();						// 계좌2 잔액 출력
	account.transfer(5000, account2);		// 계좌2의 5000 계좌1로 송금
	account.print();						// 계좌1 잔액 출력
	account2.print2();						// 계좌2 잔액 출력

	system("pause");
	return 0;
}