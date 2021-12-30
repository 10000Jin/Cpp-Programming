/*
2와 100사이에 있는 모든 소수(prime numder)를 찾는 프로그램 작성.
소수는 1과 자기 자신외에는 약수를 가지지 않음.
*/

#include <iostream>
using namespace std;

int main() {
	
	cout << "2와 100사이의 모든 소수.\n";
	int j;                                            // 두번째 for문 조건안에서 선언하면 괄호안에서만
	                                                  // 적용되기 때문에 미리 선언.
	for (int i = 2; i <= 100; i++) {                  // 비교할 두 수중 1개를 정하고
		for (j = 2; j < i; j++){                      // 2번째 수를 반복문으로 비교함
			if (i % j == 0)                           // 소수는 1과 자기 자신외엔 약수가 없으므로 나머지가 0이
				break;                                // 되면 약수를 갖는 다는 것이므로 break를 통해 반복문 나감.
		}
			if (i == j)                               // 자기 자신을 경우는 제외이므로
				cout << " " << i;                    // 두 수가 같으면 출력.
	}
	
	system("pause");
	return 0;
}