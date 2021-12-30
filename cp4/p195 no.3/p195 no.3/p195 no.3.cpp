/*
�ŵ������� ����ϴ� �Լ��� �ۼ�. ���� n�� k�� �޾Ƽ� n^k�� ����ϴ� �Լ� ipower() �Լ� �ۼ�.
�� �Լ��� ȣ���Ͽ� 3^0���� 3^(10)������ ���� ���̺��� ���·� ���.
*/

#include <iostream>
using namespace std;

int ipower(int n, int k);                      // �ŵ������� ����� �ϴ� �Լ�����.

int main() {
	int n, k;

	cout << "n^k�� n�� �Է��Ͻÿ�.";
	cin >> n;
	cout << "n^k�� k�� �Է��Ͻÿ�.";
	cin >> k;

	cout << "1 ";                              // ipower �Լ����� 0������ ǥ���� �ȵǰ� ������ 0������ 1�̹Ƿ� �̸� ���.
	ipower(n, k);                              // �ŵ����� �Լ� ȣ��.

	system("pause");
	return 0;
}

int ipower(int n, int k) {

	int result = 1;                           // 1�� �ƴ� �ٸ����� �ʱ�ȭ�ϸ� i=0�϶� result���� n�� �ƴ� �ٸ����� ����.
	for (int i = 0; i < k; i++) {             // �Է¹��� k������ �ݺ�
		result = n * result;                  // n�� �ŵ������ϱ� ���� k�� ����.
		cout << result << " ";
	}
	return result;
} 