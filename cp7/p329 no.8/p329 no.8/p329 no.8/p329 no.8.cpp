/*
�������κ��� ������� �ݾ׿� ���� ���ڸ� ����ϴ� ���α׷��� �ۼ�. ����ڷκ��� ���� �ݾװ� ������
get_input()�Լ��� ���Ͽ� �Է¹���. get_input()���� ���۷��� �Ű� ������ ���.������ ��Ȳ���� �ʰ�
���ڸ� ���ٰ� �������� �� �Ѵ� ���ڸ� ����Ͽ� ���.
*/

#include <iostream>
using namespace std;

void get_input(int &money, int &interest);					// ����ݾװ� ������ �Է¹޴� �Լ�����

int main() {

	int money2, interest2, result;

	get_input(money2, interest2);							// ����ݾװ� ������ �Է¹޴� �Լ� ȣ��.
															// &money=money2, &interest=interest2
	result = money2 * interest2 / 100;						// ���ڸ� ����Ͽ� result ����.
	cout << "���ڴ� " << result << "�Դϴ�." << endl;

	system("pause");
	return 0;
}

void get_input(int &money, int &interest) {					// ����ݾװ� ������ �Է¹޴� �Լ�.
															// &money=money2, &interest=interest2
	cout << "���� �ݾ��� �Է��Ͻÿ�." << endl;
	cin >> money;
	cout << "���ڸ� �Է��Ͻÿ�.(%)" << endl;
	cin >> interest;
	cout << endl;
}