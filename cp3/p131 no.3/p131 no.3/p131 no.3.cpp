/*
0, 1로 되어 있는 2진수를 입력받아서 10진수로 변환하는 프로그램 작성.
2진수를 문자열이 아니라 정수로 입력받는다 가정. %, / 를 통해 2진수의 각 자리수 분리 가능.
*/

#include <iostream>
#include <cmath>                                      // pow() 함수를 사용하기 위해 cmath 전처리기 사용.
using namespace std;

int main() {
	
	int binary, binary2, a, b, c=0, i=0;

	cout << "2진수를 입력하시오: ";
	cin >> binary;
	binary2 = binary;                                // 출력시 처음 입력받은 2진수값을 보여주기 위해.
	cout << endl;

	while (binary2 > 0) {                            // 입력받은 2진수가 0보다 크면 반복문 실행
		a = binary2 % 10;                            // 입력받은 2진수의 10으로 나눈 나머지는 1의 자리수
		binary2 = binary2 / 10;                      // 10으로 나눈 몫은 1의 자리수를 제외한 나머지수 이므로 다시 binary2에 저장.
	
		b = a * pow(2, i);                           // 10진수로 만들기 위해 각 자리수와 2^i (i=0,1,2,3...)곱함 
		i++;                                         // 자리수가 올라갈수록 i(지수)값도 증가

		c = c + b;                                   // 각 자리수를 변환한것을 10진수로 만들기 위해 모두 더함.
		}

	cout << "2진수 " << binary << "는 " << "10진수 " << c << "입니다.\n";

	system("pause");
	return 0;
	}