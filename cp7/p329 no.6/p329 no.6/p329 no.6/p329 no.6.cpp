/*
����ڰ� ���ް� �ҵ漼���� ���ڷ� �ָ� ���޿� �ҵ漼�� �߰��Ͽ��� ��ȯ�ϴ� �Լ� add_tax()�� �ۼ�.
������ ���۷��� Ÿ������ ���޵Ǹ� �ҵ漼���� �־����� ������ 20%�� ����Ʈ������ �϶�.
*/

#include<iostream>
using namespace std;

void add_tax(int &ref, int r = 20);							// ���ް� �ҵ漼���� ����ϴ� �Լ� ����.
															// �ҵ漼�� r�� ���������� ������ defult�� 20���� ����.
int main() {
	int salary, rate;

	cout << "������ �Է��Ͻÿ�." << endl;
	cin >> salary;
	cout << "�ҵ漼���� �Է��Ͻÿ�. (%) (����Ʈ�� ���� -1 �Է�.)" << endl;
	cin >> rate;
	cout << endl;

	if (rate == -1)											// �ҵ漼���� -1�̶�� 
		add_tax(salary);									// add_tax()�Լ��� ȣ���ϰ� ���޸� �Ű������� �Ѱ���
	else if(rate > 0)										// �ҵ漼���� 0 �̻��̶��
		add_tax(salary, rate);								// add_tax()�Լ��� ���ް� �ҵ漼���� �Ű������� �Ѱ���.
	
	system("pause");
	return 0;
}

void add_tax(int &ref, int r) {								// ���ް� �ҵ漼���� ����ϴ� �Լ�
															// ���޿� ���� �Ű������� ���۷��� Ÿ������ ����.
	int result;

	result = ref + (ref * r / 100);							// ���޿� ���ް� �ҵ漼���� ���Ѱ��� ����.
	cout << "����� " << result << "�Դϴ�." << endl;
}