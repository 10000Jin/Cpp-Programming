/*
시, 분, 초로 표현된 시간을 초 단위의 시간으로 변환.
ex) 1시간 1분 1초는 3661초이다.
*/

#include <iostream>
using namespace std;

const int TRANC = 60;                                  // 기호 상수를 이용해 TRANC에 60 저장

int main() {
	int hour, hour2, min, min2, sec, sec2;             // 변수 선언

	cout << "시를 입력하시오: ";
	cin >> hour;
	cout << "분을 입력하시오: ";
	cin >> min;
	cout << "초를 입력하시오: ";
	cin >> sec;

	hour2 = hour * TRANC * TRANC;                      // 입력받은 "시"를 초로 변환하여 hour2에 저장
	min2 = min * TRANC;                                // 입력받은 "분"를 초로 변환하여 min2에 저장

	sec2 = hour2 + min2 + sec;                         // "초"로 표현된 시간들을 모두 더해 sec2에 저장 

	cout << hour << "시" << min << "분" << sec << "초는" << sec2 << "초 입니다.\n";

	system("pause");                                   // exe파일 실행시 바로 종료 되지 않기 위해 작성
	return 0;
}