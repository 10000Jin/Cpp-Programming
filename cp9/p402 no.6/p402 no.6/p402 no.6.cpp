#include <iostream>
using namespace std;

class Complex {										//Complex Ŭ���� ����
private:											// �ܺ� ���� ����
	double real_num1, real_num2;					// �� ���Ҽ��� �Ǽ��κ�
	double img_num1, img_num2;						// �� ���Ҽ��� ����κ�
	double real_result1, real_result2;				// �Ǽ��κ��� �����
	double img_result1, img_result2;				// ����κ��� �����
	bool check;										// �������� �������� Ȯ���ϴ� ����

public:												// �ܺ� ���� ���
	double get_1st_num() {							// ù��° ���Ҽ��� ������ �Լ�
		return real_num1, img_num1; 
	}
	double get_2nd_num() {							// �ι�° ���Ҽ��� ������ �Լ�
		return real_num2, img_num2; 
	}
	void set_1st_num(double a, double b) {			// ù��° ���Ҽ��� ������ �Լ�
		real_num1 = a;								// �Ű躯���� ���� ���� �� ������ ����
		img_num1 = b;
	}
	void set_2nd_num(double a, double b) {			// �ι�° ���Ҽ��� ������ �Լ�
		real_num2 = a;								// �Ű躯���� ���� ���� �� ������ ����
		img_num2 = b;
	}
	void add() {									// �� ���Ҽ��� ���� ����ϴ� �Լ�
		real_result1 = real_num1 + real_num2;
		img_result1 = img_num1 + img_num2;
		check == 1;									// check�� 1����
	}
	void subtrac() {								// �� ���Ҽ��� ���� ����ϴ� �Լ�
		real_result2 = real_num1 - real_num2;
		img_result2 = img_num1 - img_num2;
		check == 0;									// check�� 2����
	}
	void print() {									// ����� ����ϴ� �Լ�
		cout << "ù��° ���Ҽ�: " << real_num1 << "+" << img_num1 << "i" << endl;
		cout << "�ι�° ���Ҽ�: " << real_num2 << "+" << img_num2 << "i" << endl;
		if(check)									// check�� 1�̸� �� ��� ���
			cout << "�� ���Ҽ��� ��: " << real_result1 << "+" << img_result1 << "i" << endl;
		cout << "�� ���Ҽ��� ��: " << real_result2 << "+" << img_result2 << "i" << endl;
	}												// check�� 0�̸� �� ��� ���
};

int main() {
	Complex num;									// Complex Ŭ������ num ��ü ���� 

	num.set_1st_num(8.4, 10.8);						// ù��° ���Ҽ� ������ �ʱ�ȭ
	num.set_2nd_num(3.6, 7.1);						// �ι�° ���Ҽ� ������ �ʱ�ȭ
	num.add();										// �� ���Ҽ��� �� ���
	num.subtrac();									// �� ���Ҽ��� �� ���
	num.print();									// ����� ���

	system("pause");
	return 0;
}