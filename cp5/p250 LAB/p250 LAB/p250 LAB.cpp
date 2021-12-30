#include <iostream>
#include <cstdlib>                                      // rand()�Լ��� ����ϱ� ���� cstdlib ��ó���� ���.
#include <ctime>                                        // rand()�Լ��� �ð����� �ʱ�ȭ�ϱ� ���� ctime ��ó���� ���.
#include <iomanip>                                      // setw()�Լ��� ����ϱ� ���� iomonip��ó���� ���.
using namespace std;

#define COL 5                                           // COL�� 5�� �����ϰ� ����ϱ� ���� ��ȣ��� ���.
#define ROW 5                                           // ROW�� 5�� �����ϰ� ����ϱ� ���� ��ȣ��� ���.

bool check_dir(int array[][ROW], int d);                // ������ �迭�� ������� Ȯ���ϴ� �Լ� ����.
void move_bug(int array[][ROW], int d);					// ������ �������� ���� �����̴� �Լ� ����.
bool check_tile(int const arrry[][ROW]);				// �迭�� ��� 0�� ���������� Ȯ���ϴ� �Լ� ����.
void max_number(int[][ROW]);							// ���� ���� �湮�� ���� ã�� �Լ� ����.
void print(const int array[][ROW]);                     // �迭�� ����ϴ� �Լ� ����.

int i = COL / 2, j = ROW / 2;                           // i�� j�� �����Լ��� �����Ͽ� ��� �Լ����� ����Ҽ� �ֵ��� ��.

int main() {
	int dir, count = 0;                                 // ���Ⱚ�� �����ϴ� ���� dir, Ƚ���� �����ϴ� �Լ� count
	int array[COL][ROW] = {0};                          // 5*5 �������� �迭�� �����ϰ� �� ���� 0���� �ʱ�ȭ.
	
	array[i][j] = 1;                                    // ������ ó�� ��ġ�� �迭�� ����� 1����.
	
	srand((unsigned)time(NULL));                        // rand()�Լ��� �ð����� �ʱ�ȭ.

	while (1) {											// ���ѹݺ���
		dir = rand() % 8;                               // ������ 0~7���� 8���� ������ ran() % 8

		if (check_dir(array, dir)) {					// ������ �迭 ���� ����� �ʴ´ٸ� if�� ����.
			move_bug(array, dir);						// ������ �������� ���� �����̴� �Լ� ȣ��.
		
			count++;									// ������ ������ ������ Ƚ�� 1����.

			if (check_tile(array))						// �迭�� 0���ִ��� Ȯ���ϴ� �Լ��� ȣ���Ͽ� 0�� ������ if�� ����.
				break;									// �迭�� 0�� ���ٸ� �ݺ��� ����.
		}
	}
	cout << "�� �̵� Ƚ���� " << count << "�� �Դϴ�.\n";
	max_number(array);									// ���� ���� �湮�� ���� ã�� �Լ� ȣ��.

	system("pause");
	return 0;
}

bool check_dir(int array[][ROW], int d) {				// ������ �迭�� ������� Ȯ���ϴ� �Լ�.
														
	if (i == 0) {										// �迭�� �� ���� �϶�
		if (d == 7 || d == 0 || d == 1)					// �������� 0, 1, 7�̸� 0��ȯ
			return 0;
	}
	else if (i == COL - 1) {							// �迭�� �� �Ʒ��� �϶�
		if (d == 5 || d == 4 || d == 3)					// �������� 3, 4, 5�̸� 0��ȯ
			return 0;
	}
	if (j == 0) {										// �迭�� �� ������ �϶�
		if (d == 7 || d == 6 || d == 5)					// �������� 5, 6, 7�̸� 0��ȯ.
			return 0;
	}
	else if (j == ROW - 1) {							// �迭�� �� �������� �϶�
		if (d == 1 || d == 2 || d == 3)					// �������� 1, 2, 3�̸� 0��ȯ.
			return 0;
	}
	return 1;											// �׿ܿ� �������� ��� 1��ȯ.
}

void move_bug(int array[][ROW], int d) {				// ������ �������� ���� �����̴� �Լ�.

	switch (d) {										// switch���� ����Ͽ� ��������
	case 0:												// 0�϶�
		i--;											// ���� �� -1
		break;
	case 1:												// 1�϶�
		i--;											// ���� �� -1, ���� �� +1
		j++;
		break;
	case 2:												// 2�϶�
		j++;											// ���� �� +1
		break;
	case 3:												// 3�϶�
		i++;											// ���� �� +1, ���� �� +1
		j++;
		break;
	case 4:												// 4�϶�
		i++;											// ���� �� +1
		break;
	case 5:												// 5�϶�
		i++;											// ���� �� +!, ���� �� -1
		j--;
		break;
	case 6:												// 6�϶�
		j--;											// ���� �� -1
		break;
	case 7:												// 7�϶�
		i--;											// ���� �� +1, ���� �� -1
		j--;
		break;
	}
	array[i][j] = array[i][j] + 1;						// �迭�� ���� �濡 �ö����� 1�� ����
	cout << "���� ������ ��ġ: ";
	cout << i << ", " << j << endl;
	print(array);										// �Լ��� ����ϴ� �Լ� ȣ��.
}

bool check_tile(int const array[][ROW]) {				// �迭�� ��� 0�� ���������� Ȯ���ϴ� �Լ�.
														// �迭�� �ٲ�� �ȵǹǷ� �迭�տ� const ���.
	for (int m = 0; m < COL; m++) {						// for���� ����� ��� ���� �˻��Ͽ� 0�� ������
		for (int n = 0; n < ROW; n++)					// 0�� ��ȯ�ϰ� ������ 1��ȯ.
			if (array[m][n] == 0)
				return 0;
	}
	return 1;
}

void max_number(int array[][ROW]) {						// ���� ���� �湮�� ���� ã�� �Լ�.
	int max=0, x, y;

	for (int m = 0; m < COL; m++) {						// for���� ����� �迭�� �ִ밪�� ��ǥ�� ����.
		for(int n = 0; n < ROW; n++)
			if (max < array[m][n]){						// 1�� 1���� ����� max(0)�� ���Ͽ� max���� ũ�� 
				max = array[m][n];						// �� ���� max�� ����.
				x = m;									// �׸��� �׶��� �� ��ȣ�� x, y�� ����.
				y = n;
			}
	}
	cout << "���� ���� �湮�� �� ��ǥ: " << x << ", " << y << endl;
	cout << max << "�� �湮." << endl;
}

void print(const int array[][ROW]) {					// �迭�� ����ϴ� �Լ�. �迭�� �ٲ�� �ȵǹǷ� �迭�տ� const ���.
	for (int m = 0; m < COL; m++) {						// for���� ����Ͽ� �迭�� ���.
		for (int n = 0; n < ROW; n++)
			cout << setw(3) <<array[m][n] << "  ";		// setw()�Լ��� ����� �迭���� ���� ����.
		cout << endl;
	}
	cout << endl;
}