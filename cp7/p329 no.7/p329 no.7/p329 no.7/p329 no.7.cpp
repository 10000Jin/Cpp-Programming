/*
원기둥의 부피를 구하는 프로그램을 작성. 원기둥의 부피를 구하는 함수 cylinder(r,h)을 작성하고
원기둥의 높이가 주어지지 않는다면 1.0으로 가정.
*/

#include <iostream>
#include <cmath>								// pow()함수를 사용하기 위해 camth 전처리기 사용.
using namespace std;

void cylinder(double r, double h = 1.0);		// 원기둥의 부피를 구하는 함수 원형.
												// 높이가 주어지지 않았을때 높이를 1.0으로 디폴트값 설정.
int main() {
	double r, h;								// 반지름과 높이가 실수일수 있으므로 double형 변수 선언.

	cout << "원기둥의 반지름을 입력하시오." << endl;
	cin >> r;
	cout << "원기둥의 높이를 입력하시오. (디폴트값을 사용하려면 -1 입력.)" << endl;
	cin >> h;
	cout << endl;

	if (h == -1)								// 높이가 -1이 입력되면
		cylinder(r);							// cylinder()함수 호출하고 반지름만 매개변수로 넘겨줌.
	else if (h > 0)								// 높이가 0이상이면
		cylinder(r, h);							// cylinder()함수 호출하고 반지름과 높이를 매개변수로 넘겨줌.

	system("pause");
	return 0;
}

void cylinder(double r, double h) {				// 원기둥의 부피를 구하는 함수.
	double v, pi = 3.141592;					// 원기둥의 부피와 pi는 실수이므로 double형 변수 선언.

	v = pi * pow(r, 2) * h;						// 원기둥의 부피를 구하는 공식. pow()함수를 사용하여 r^2 표현.
	cout << "원기둥의 부피는 " << v << "입니다." << endl;
}