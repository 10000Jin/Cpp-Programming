/*
cm�� ǥ���� Ű�� �Է��Ͽ� ��Ʈ�� ��ġ�� ��ȯ
1��Ʈ�� 12��ġ, 1��ġ�� 2.54cm
*/

#include <iostream>
using namespace std;

#define INCH 2.54                                // ��ȣ ����� �̿��� INCH�� 2.54����
#define FEET 12                                  // ��ȣ ����� �̿��� FEET�� 12����

int main() {
	double feet1, feet3, inch, cm;              // ������ ������ �����ϸ鼭 �Ǽ��� ���ü� ������ double������ ���� ����
	int feet2;                                  // �Ǽ����� ���� �κи� �����ϱ� ���� int�� ���� ����

	cout << "Ű�� �Է��Ͻÿ�: ";
	cin >> cm;

	feet1 = cm / INCH / FEET;                    // ��ȣ����� �̿��Ͽ� feet1�� �Է¹��� cm�� ��Ʈ�� ��ȯ

	feet2 = feet1;                               // �Ǽ��� �� feet1���� ������ ����
	feet3 = feet1 - feet2;                       // feet1�� �Ҽ� �κ��� ��� ����
	inch = feet3 * FEET;                         // feet1�� �Ҽ��κ��� ��ġ�� ��ȯ

	cout << cm << "cm �� " << feet2 << "��Ʈ " << inch << "��ġ �Դϴ�.\n";
	cout << endl;                                // �ٹٲ�

	// ��Ʈ�� ��ġ�� ǥ���� Ű�� cm�� ��ȯ
	int feet4, inch2;                            // ��Ʈ�� ��ġ�� cm�� �ٲٱ� ���� ���� ����
	double cm2;                                  // ������ �����ϸ鼭 �Ǽ��� ���ü��� �����Ƿ� double�� ���� ����

	cout << "Ű�� �Է��Ͻÿ�(��Ʈ): ";
	cin >> feet4;
	cout << "Ű�� �Է��Ͻÿ�(��ġ): ";
	cin >> inch2;

	cm2 = feet4 * FEET * INCH + inch2 * INCH;    // ��ȣ����� �̿��� ��Ʈ�� ��ġ�� cm�� ��ȯ

	cout << feet4 << "��Ʈ " << inch2 << "��ġ�� " << cm2 << "cm �Դϴ�.\n";

	system("pause");                             // exe���� ����� �ٷ� ���� ���� �ʱ� ���� �ۼ�
	return 0;
}