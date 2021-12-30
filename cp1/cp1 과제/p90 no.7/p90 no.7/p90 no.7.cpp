/*
cm로 표현된 키를 입력하여 피트와 인치로 변환
1피트는 12인치, 1인치는 2.54cm
*/

#include <iostream>
using namespace std;

#define INCH 2.54                                // 기호 상수를 이용해 INCH에 2.54저장
#define FEET 12                                  // 기호 상수를 이용해 FEET에 12저장

int main() {
	double feet1, feet3, inch, cm;              // 길이의 단위를 변경하면서 실수가 나올수 있으니 double형으로 변수 선언
	int feet2;                                  // 실수에서 정수 부분만 추출하기 위한 int형 변수 선언

	cout << "키를 입력하시오: ";
	cin >> cm;

	feet1 = cm / INCH / FEET;                    // 기호상수를 이용하여 feet1에 입력받은 cm를 피트로 변환

	feet2 = feet1;                               // 실수로 된 feet1에서 정수만 추출
	feet3 = feet1 - feet2;                       // feet1의 소수 부분을 얻기 위함
	inch = feet3 * FEET;                         // feet1의 소수부분을 인치로 변환

	cout << cm << "cm 는 " << feet2 << "피트 " << inch << "인치 입니다.\n";
	cout << endl;                                // 줄바꿈

	// 피트와 인치로 표현된 키를 cm로 변환
	int feet4, inch2;                            // 피트와 인치를 cm로 바꾸기 위한 변수 선언
	double cm2;                                  // 단위를 변경하면서 실수가 나올수도 있으므로 double형 변수 선언

	cout << "키를 입력하시오(피트): ";
	cin >> feet4;
	cout << "키를 입력하시오(인치): ";
	cin >> inch2;

	cm2 = feet4 * FEET * INCH + inch2 * INCH;    // 기호상수를 이용해 피트와 인치를 cm로 변환

	cout << feet4 << "피트 " << inch2 << "인치는 " << cm2 << "cm 입니다.\n";

	system("pause");                             // exe파일 실행시 바로 종료 되지 않기 위해 작성
	return 0;
}