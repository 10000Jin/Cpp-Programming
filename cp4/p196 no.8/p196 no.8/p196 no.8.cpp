/*
rand()�Լ��� �ѹ� ȣ��ɶ� ���� 0���� n���� ������ ������ ���� Ȯ���� �����Ͽ� ��ȯ.
���⼭ n�� �ý��ۿ� ���� �޶���. ���� C++�� ��� 0~32767������ ������ ��ȯ.
1. ������ �������� ������ ���Ƿ� �����Ͽ� ��ȯ�ϴ� �Լ� rand_range()�� �ۼ�. �Լ��� �Ű� ������ ������ ������ ���Ѱ��� ���Ѱ�.
2. rand_range() �Լ��� �̿��Ͽ� �ֻ����� 600�� �������� ������ ���� ��� ó���Ͽ�  1���� 6������ ���� �ٻ������� ���� Ȯ���� ������ ������.
*/

#include <iostream>
#include <cstdlib>                                                         // rand()�Լ��� ����ϱ� ����.
using namespace std;

int rand_range(int u, int l);                                              // �������� ��ȯ���� �����ϴ� �Լ� ����
void probability(int count);                                               // Ȯ���� ����ϴ� �Լ� ����

int main() {
	int up, low;

	cout << "���Ѱ��� ���Ѱ��� �Է��Ͻÿ�.";
	cin >> up >> low;

	cout << endl << "��ȯ�� : " << rand_range(up, low) << endl << endl;    // ��ȯ���� ��ȯ�ް� ���.

	cout << "�ֻ����� 600�� �������� Ȯ��." << endl;
	probability(600);                                                      // 600�� �ݺ������� Ȯ���� Ȯ����� �Լ��κ��� �޾� ���.

	system("pause");
	return 0;
}

int rand_range(int u, int l) {                                             // �������� ��ȯ���� �����ϴ� �Լ�
	int result;

	result = rand() % u;                                                   // rand()�Լ��� ���Ѱ����� �������� 0���� ���Ѱ�-1 ������ ��
	return result;                                                         // result�� ��ȯ
}

void probability(int count) {                                              // ��ȯ�� ���� �����Ƿ� ��ȯ�� void
	int num;
	double one=0, two=0, three=0, four=0, five=0, six=0;
	double p_one, p_two, p_three, p_four, p_five, p_six;                   // Ȯ���� �Ǽ��� �ɼ� �����Ƿ� double�� ���� ����.

	for (int i = 0; i < count; i++) {                                      // count��ŭ �ݺ�.
		num = rand_range(6, 1) + 1;                                        // 0~5�̱� ������ +1�� �Ͽ� �ֻ��� ���� ó�� ����.
		
		if (num == 1)                                                      // if else���� ���� �ش�Ǵ� �ֻ��� ���� ���� 1����
			one++;
		else if (num == 2) 
			two++;
		else if (num == 3) 
			three++;
		else if (num == 4) 
			four++;
		else if (num == 5) 
			five++;
		else 
			six++;
	}
	p_one = one / 600 * 100;                                               // �ش紫�� ���� Ƚ���� ��üȽ���� ������ 100�� ���� Ȯ�� ���.
	p_two = two / 600 * 100;
	p_three = three / 600 * 100;
	p_four = four / 600 * 100;
	p_five = five / 600 * 100;
	p_six = six / 600 * 100;

	cout << "1�� ���� Ƚ��" << one << ", 1�� ���� Ȯ�� = " << p_one << "%" << endl;
	cout << "2�� ���� Ƚ��" << two << ", 2�� ���� Ȯ�� = " << p_two << "%" << endl;
	cout << "3�� ���� Ƚ��" << three << ", 3�� ���� Ȯ�� = " << p_three << "%" << endl;
	cout << "4�� ���� Ƚ��" << four << ", 4�� ���� Ȯ�� = " << p_four << "%" << endl;
	cout << "5�� ���� Ƚ��" << five << ", 5�� ���� Ȯ�� = " << p_five << "%" << endl;
	cout << "6�� ���� Ƚ��" << six << ", 6�� ���� Ȯ�� = " << p_six << "%" << endl;
}