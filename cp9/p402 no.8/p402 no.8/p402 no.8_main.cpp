// BankAccount Ŭ���� �׽�Ʈ��

#include <iostream>
#include <string>
#include "BankAccount.h"					// BankAccount ������� include
using namespace std;

int main() {
	BankAccount account, account2;			// account, account2 ��ü ����

	account.setBalance(0);					// ����1 �ܾ� 0���� �ʱ�ȭ
	account2.setBalance(8000);				// ����2 �ܾ� 8000���� �ʱ�ȭ
	account.deposit(10000);					// ����1 10000 ����
	account.print();						// ����1 �ܾ� ���
	account.withdraw(8000);					// ����1 8000 ����
	account.print();						// ����1 �ܾ� ���
	account2.print2();						// ����2 �ܾ� ���
	account.transfer(5000, account2);		// ����2�� 5000 ����1�� �۱�
	account.print();						// ����1 �ܾ� ���
	account2.print2();						// ����2 �ܾ� ���

	system("pause");
	return 0;
}