/*
rand()함수가 한번 호출될때 마다 0에서 n까지 구간에 정수를 같은 확률로 선택하여 반환.
여기서 n은 시스템에 따라 달라짐. 보통 C++의 경우 0~32767까지의 정수를 반환.
1. 지정된 범위안의 정수를 임의로 선택하여 반환하는 함수 rand_range()를 작성. 함수의 매개 변수는 지정된 범위의 상한값과 하한값.
2. rand_range() 함수를 이용하여 주사위를 600번 던졌을때 나오는 값을 통계 처리하여  1부터 6까지의 값이 근사적으로 같은 확률을 가짐을 보여라.
*/

#include <iostream>
#include <cstdlib>                                                         // rand()함수를 사용하기 위함.
using namespace std;

int rand_range(int u, int l);                                              // 램덤으로 반환값을 생성하는 함수 원형
void probability(int count);                                               // 확률을 계산하는 함수 원형

int main() {
	int up, low;

	cout << "상한값과 하한값을 입력하시오.";
	cin >> up >> low;

	cout << endl << "반환값 : " << rand_range(up, low) << endl << endl;    // 반환값을 반환받고 출력.

	cout << "주사위를 600번 던졌을때 확률." << endl;
	probability(600);                                                      // 600번 반복했을때 확률을 확률계산 함수로부터 받아 출력.

	system("pause");
	return 0;
}

int rand_range(int u, int l) {                                             // 랜덤으로 반환값을 생성하는 함수
	int result;

	result = rand() % u;                                                   // rand()함수를 상한값으로 나눈값이 0부터 상한값-1 까지의 수
	return result;                                                         // result값 반환
}

void probability(int count) {                                              // 반환할 값이 없으므로 반환형 void
	int num;
	double one=0, two=0, three=0, four=0, five=0, six=0;
	double p_one, p_two, p_three, p_four, p_five, p_six;                   // 확률은 실수가 될수 있으므로 double형 변수 선언.

	for (int i = 0; i < count; i++) {                                      // count만큼 반복.
		num = rand_range(6, 1) + 1;                                        // 0~5이기 때문에 +1을 하여 주사위 눈수 처럼 만듦.
		
		if (num == 1)                                                      // if else문을 통해 해당되는 주사위 눈에 변수 1증가
			one++;
		else if (num == 2) 
			two++;
		else if (num == 3) 
			three++;
		else if (num == 4) 
			four++;
		else if (num == 5) 
			five++;
		else 
			six++;
	}
	p_one = one / 600 * 100;                                               // 해당눈이 나온 횟수에 전체횟수를 나눈뒤 100을 곱해 확률 계산.
	p_two = two / 600 * 100;
	p_three = three / 600 * 100;
	p_four = four / 600 * 100;
	p_five = five / 600 * 100;
	p_six = six / 600 * 100;

	cout << "1이 나온 횟수" << one << ", 1이 나올 확률 = " << p_one << "%" << endl;
	cout << "2이 나온 횟수" << two << ", 2이 나올 확률 = " << p_two << "%" << endl;
	cout << "3이 나온 횟수" << three << ", 3이 나올 확률 = " << p_three << "%" << endl;
	cout << "4이 나온 횟수" << four << ", 4이 나올 확률 = " << p_four << "%" << endl;
	cout << "5이 나온 횟수" << five << ", 5이 나올 확률 = " << p_five << "%" << endl;
	cout << "6이 나온 횟수" << six << ", 6이 나올 확률 = " << p_six << "%" << endl;
}