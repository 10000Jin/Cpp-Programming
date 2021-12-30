/*
10000보다 작은 정수를 입력받아 천의 자리, 백의 자리, 십의 자리, 일의 자리로 분리 출력
ex) 5623입력하면 5,6,2,3을 차례로 출력  (나눗셈과 나머지 연산 사용)
*/

#include <iostream>
using namespace std;

int main() {

	int enter, chun, chun2, baek, baek2, sip, sip2, il;          // 변수 선언

	cout << "정수를 입력하시오: ";
	cin >> enter;                                                // 입력받은 정수를 enter에 저장
	cout << endl;                                                // 줄바꿈

	chun = enter / 1000;                                         // 천의 자리만 추출하기 위해 1000으로 나눔
	chun2 = enter % 1000;                                        // 백의 자리를 구하기 위해 나머지를 chun2에 저장
	baek = chun2 / 100;                                          // 백의 자리만 추출하기 위해 100으로 나눔
	baek2 = chun2 % 100;                                         // 십의 자리를 구하기 위해 나머지를 baek2에 저장
	sip = baek2 / 10;                                            // 십의 자리만 추출하기 위해 10으로 나눔
	sip2 = baek2 % 10;                                           // 일의 자리를 구하기 위해 나머지를 sip2에 저장
	il = sip2 / 1;                                               // 일의 자리를 구하기 위해 나머지를 1로 나눔

	cout << "천의 자리: " << chun << endl;
	cout << "백의 자리: " << baek << endl;
	cout << "십의 자리: " << sip << endl;
	cout << "일의 자리: " << il << endl;                         // 출력

	system("pause");                                             // exe파일 실행시 바로 종료 되지 않기 위해 작성
	return 0;
}