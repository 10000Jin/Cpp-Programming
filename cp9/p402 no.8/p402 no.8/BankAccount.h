// BankAQccount Ŭ���� �����

#include <iostream>
#include <string>					
using namespace std;

class BankAccount {						// BankAccount Ŭ���� ����
	int accontNumber;					// ���� ��ȣ ��� ����
	string owner;						// ������ ��� ����
	int balance;						// �ܾ� ��� ����
										// private ���� ������ ����
public:									// �ܺ� ���� ���
	void setBalance(int amount);		// �ܾ� ������ �Լ�����
	int getBalance();					// �ܾ� ������ �Լ�����
	void deposit(int amount);			// �����ϴ� �Լ�����
	void withdraw(int amount);			// �����ϴ� �Լ�����
	void print();						// ù��° ���� ��� �Լ�����
	void print2();						// �ι��� ���� ��� �Լ�����
	void transfer(int amount, BankAccount &other);
};										// ����1���� ����2�� �۱��ϴ� �Լ�����