#include <iostream>
#include <cstdlib>                                      // rand()함수를 사용하기 위해 cstdlib 전처리기 사용.
#include <ctime>                                        // rand()함수를 시간으로 초기화하기 위해 ctime 전처리기 사용.
#include <iomanip>                                      // setw()함수를 사용하기 위해 iomonip전처리기 사용.
using namespace std;

#define COL 5                                           // COL에 5를 저장하고 사용하기 위해 기호상수 사용.
#define ROW 5                                           // ROW에 5를 저장하고 사용하기 위해 기호상수 사용.

bool check_dir(int array[][ROW], int d);                // 벌레가 배열을 벗어나는지 확인하는 함수 원형.
void move_bug(int array[][ROW], int d);					// 벌레가 랜덤값에 따라 움직이는 함수 원형.
bool check_tile(int const arrry[][ROW]);				// 배열이 모두 0이 없어졌는지 확인하는 함수 원형.
void max_number(int[][ROW]);							// 가장 많이 방문한 방을 찾는 함수 원형.
void print(const int array[][ROW]);                     // 배열을 출력하는 함수 원형.

int i = COL / 2, j = ROW / 2;                           // i와 j를 전역함수로 선언하여 모든 함수에서 사용할수 있도록 함.

int main() {
	int dir, count = 0;                                 // 방향값을 저장하는 변수 dir, 횟수를 저장하는 함수 count
	int array[COL][ROW] = {0};                          // 5*5 사이즈의 배열을 선언하고 각 방을 0으로 초기화.
	
	array[i][j] = 1;                                    // 벌레의 처음 위치인 배열의 가운데에 1저장.
	
	srand((unsigned)time(NULL));                        // rand()함수를 시간으로 초기화.

	while (1) {											// 무한반복문
		dir = rand() % 8;                               // 방향은 0~7까지 8가지 임으로 ran() % 8

		if (check_dir(array, dir)) {					// 벌레가 배열 밖을 벗어나지 않는다면 if문 실행.
			move_bug(array, dir);						// 벌레가 랜덤값에 따라 움직이는 함수 호출.
		
			count++;									// 벌레가 움직일 때마다 횟수 1증가.

			if (check_tile(array))						// 배열에 0이있는지 확인하는 함수를 호출하여 0이 없으면 if문 실행.
				break;									// 배열에 0이 없다면 반복문 종료.
		}
	}
	cout << "총 이동 횟수는 " << count << "번 입니다.\n";
	max_number(array);									// 가장 많이 방문한 방을 찾는 함수 호출.

	system("pause");
	return 0;
}

bool check_dir(int array[][ROW], int d) {				// 벌레가 배열을 벗어나는지 확인하는 함수.
														
	if (i == 0) {										// 배열의 맨 윗줄 일때
		if (d == 7 || d == 0 || d == 1)					// 랜덤값이 0, 1, 7이면 0반환
			return 0;
	}
	else if (i == COL - 1) {							// 배열의 맨 아랫줄 일때
		if (d == 5 || d == 4 || d == 3)					// 랜덤값이 3, 4, 5이면 0반환
			return 0;
	}
	if (j == 0) {										// 배열의 맨 왼쪽줄 일때
		if (d == 7 || d == 6 || d == 5)					// 랜덤값이 5, 6, 7이면 0반환.
			return 0;
	}
	else if (j == ROW - 1) {							// 배열의 맨 오른쪽줄 일때
		if (d == 1 || d == 2 || d == 3)					// 랜덤값이 1, 2, 3이면 0반환.
			return 0;
	}
	return 1;											// 그외에 정상적인 경우 1반환.
}

void move_bug(int array[][ROW], int d) {				// 벌레가 랜덤값에 따라 움직이는 함수.

	switch (d) {										// switch문을 사용하여 랜덤값이
	case 0:												// 0일때
		i--;											// 행의 값 -1
		break;
	case 1:												// 1일때
		i--;											// 행의 값 -1, 열의 값 +1
		j++;
		break;
	case 2:												// 2일때
		j++;											// 열의 값 +1
		break;
	case 3:												// 3일때
		i++;											// 행의 값 +1, 열의 값 +1
		j++;
		break;
	case 4:												// 4일때
		i++;											// 행의 값 +1
		break;
	case 5:												// 5일때
		i++;											// 행의 값 +!, 열의 값 -1
		j--;
		break;
	case 6:												// 6일때
		j--;											// 열의 값 -1
		break;
	case 7:												// 7일때
		i--;											// 행의 값 +1, 열의 값 -1
		j--;
		break;
	}
	array[i][j] = array[i][j] + 1;						// 배열의 같은 방에 올때마다 1씩 증가
	cout << "현재 벌레의 위치: ";
	cout << i << ", " << j << endl;
	print(array);										// 함수를 출력하는 함수 호출.
}

bool check_tile(int const array[][ROW]) {				// 배열이 모두 0이 없어졌는지 확인하는 함수.
														// 배열이 바뀌면 안되므로 배열앞에 const 사용.
	for (int m = 0; m < COL; m++) {						// for문을 사용해 모든 방을 검사하여 0이 있으면
		for (int n = 0; n < ROW; n++)					// 0을 반환하고 없으면 1반환.
			if (array[m][n] == 0)
				return 0;
	}
	return 1;
}

void max_number(int array[][ROW]) {						// 가장 많이 방문한 방을 찾는 함수.
	int max=0, x, y;

	for (int m = 0; m < COL; m++) {						// for문을 사용해 배열의 최대값과 좌표를 구함.
		for(int n = 0; n < ROW; n++)
			if (max < array[m][n]){						// 1행 1열의 방부터 max(0)과 비교하여 max보다 크면 
				max = array[m][n];						// 그 값을 max에 저장.
				x = m;									// 그리고 그때의 반 번호를 x, y에 저장.
				y = n;
			}
	}
	cout << "가장 많이 방문한 방 좌표: " << x << ", " << y << endl;
	cout << max << "번 방문." << endl;
}

void print(const int array[][ROW]) {					// 배열을 출력하는 함수. 배열이 바뀌면 안되므로 배열앞에 const 사용.
	for (int m = 0; m < COL; m++) {						// for문을 사용하여 배열을 출력.
		for (int n = 0; n < ROW; n++)
			cout << setw(3) <<array[m][n] << "  ";		// setw()함수를 사용해 배열간의 간격 조정.
		cout << endl;
	}
	cout << endl;
}