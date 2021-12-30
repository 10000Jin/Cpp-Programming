// BankAccount Ŭ���� ���Ǻ�

#include <iostream>
#include <string>
#include "BankAccount.h"						// BankAccount ������� include
using namespace std;

void BankAccount::setBalance(int amount) {		// �ܾ� ������ �Լ�
	balance = amount;
}
int BankAccount::getBalance() {					// �ܾ� ������ �Լ�
	return balance;
}
void BankAccount::deposit(int amount) {			// �����ϴ� �Լ�
	balance += amount;
}
void BankAccount::withdraw(int amount) {		// �����ϴ� �Լ�
	balance -= amount;
}
void BankAccount::print() {						// ù��° ���� ��� �Լ�
	cout << "����1�� �ܾ��� " << balance << "�Դϴ�." << endl;
}
void BankAccount::print2() {					// �ι�° ���� ��� �Լ�
	cout << "����2�� �ܾ��� " << balance << "�Դϴ�." << endl;
}
												// ����1���� ����2�� �۱��ϴ� �Լ�
void BankAccount::transfer(int amount, BankAccount &other) {		// ���۷��� ���
	other.balance -= amount;					// ����2���� amount ��
	balance += amount;							// ����1���� amount ����
}