/*
�� �������� �Ÿ��� ����ϴ� �Լ��� �ۼ�. 2���� �������� ����(x1, y1)�� (x2, y2)������ �Ÿ��� ����ϴ�
dist_2d()�� �ۼ�. ����: sqrt((x1-x2)^2+(y1-y2)^2)
*/

#include <iostream>
#include <cmath>                                             // sqrt()�Լ��� ����ϱ� ���� cmath ��ó���� ���.
using namespace std;

double dist_2d(int x1, int y1, int x2, int y2);              // �� �� ������ �Ÿ��� ���ϴ� �Լ� ����

int main() {
	int x1, y1, x2, y2;

	cout << "(x1, y1)��ǥ�� ���ʷ� �Է��Ͻÿ�.";
	cin >> x1 >> y1;
	cout << "(x2, y2)��ǥ�� ���ʷ� �Է��Ͻÿ�.";
	cin >> x2 >> y2;

	cout << endl << "�� �� ������ �Ÿ��� ";
	cout << dist_2d(x1, y1, x2, y2) << endl;                 // �� �� ������ �Ÿ��� �Լ��� ȣ���ϰ� ���.

	system("pause");
	return 0;
}

double dist_2d(int x1, int y1, int x2, int y2) {             // �� �� ������ �Ÿ��� ���ϴ� �Լ�. 
	                                                         // �����ٽ� �Ǽ��� ���ü� �����Ƿ� ��ȯ�� double ���.
	int a;
	double b;                                                // �������� ������ ����� �Ǽ��� ���ü� �����Ƿ�

	a = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
	b = sqrt(a);

	return b;                                                // ��� b�� �� ��ȯ.
}
