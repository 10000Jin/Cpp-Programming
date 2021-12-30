/*
거듭제곱을 계산하는 함수를 작성. 정수 n과 k를 받아서 n^k을 계산하는 함수 ipower() 함수 작성.
이 함수를 호출하여 3^0부터 3^(10)까지의 값을 테이블의 형태로 출력.
*/

#include <iostream>
using namespace std;

int ipower(int n, int k);                      // 거듭제곱을 계산을 하는 함수원형.

int main() {
	int n, k;

	cout << "n^k의 n을 입력하시오.";
	cin >> n;
	cout << "n^k의 k을 입력하시오.";
	cin >> k;

	cout << "1 ";                              // ipower 함수에서 0제곱은 표현이 안되고 모든수의 0제곱은 1이므로 미리 출력.
	ipower(n, k);                              // 거듭제곱 함수 호출.

	system("pause");
	return 0;
}

int ipower(int n, int k) {

	int result = 1;                           // 1이 아닌 다른수로 초기화하면 i=0일때 result값이 n이 아닌 다른값이 나옴.
	for (int i = 0; i < k; i++) {             // 입력받은 k전까지 반복
		result = n * result;                  // n을 거듭제곱하기 위해 k번 곱함.
		cout << result << " ";
	}
	return result;
} 