/*
��, ��, �ʷ� ǥ���� �ð��� �� ������ �ð����� ��ȯ.
ex) 1�ð� 1�� 1�ʴ� 3661���̴�.
*/

#include <iostream>
using namespace std;

const int TRANC = 60;                                  // ��ȣ ����� �̿��� TRANC�� 60 ����

int main() {
	int hour, hour2, min, min2, sec, sec2;             // ���� ����

	cout << "�ø� �Է��Ͻÿ�: ";
	cin >> hour;
	cout << "���� �Է��Ͻÿ�: ";
	cin >> min;
	cout << "�ʸ� �Է��Ͻÿ�: ";
	cin >> sec;

	hour2 = hour * TRANC * TRANC;                      // �Է¹��� "��"�� �ʷ� ��ȯ�Ͽ� hour2�� ����
	min2 = min * TRANC;                                // �Է¹��� "��"�� �ʷ� ��ȯ�Ͽ� min2�� ����

	sec2 = hour2 + min2 + sec;                         // "��"�� ǥ���� �ð����� ��� ���� sec2�� ���� 

	cout << hour << "��" << min << "��" << sec << "�ʴ�" << sec2 << "�� �Դϴ�.\n";

	system("pause");                                   // exe���� ����� �ٷ� ���� ���� �ʱ� ���� �ۼ�
	return 0;
}