/*
두 점사이의 거리를 계산하는 함수를 작성. 2차원 공간에서 두점(x1, y1)와 (x2, y2)사이의 거리를 계산하는
dist_2d()를 작성. 공식: sqrt((x1-x2)^2+(y1-y2)^2)
*/

#include <iostream>
#include <cmath>                                             // sqrt()함수를 사용하기 위한 cmath 전처리기 사용.
using namespace std;

double dist_2d(int x1, int y1, int x2, int y2);              // 두 점 사이의 거리를 구하는 함수 원형

int main() {
	int x1, y1, x2, y2;

	cout << "(x1, y1)좌표를 차례로 입력하시오.";
	cin >> x1 >> y1;
	cout << "(x2, y2)좌표를 차례로 입력하시오.";
	cin >> x2 >> y2;

	cout << endl << "두 점 사이의 거리는 ";
	cout << dist_2d(x1, y1, x2, y2) << endl;                 // 두 점 사이의 거리를 함수를 호출하고 출력.

	system("pause");
	return 0;
}

double dist_2d(int x1, int y1, int x2, int y2) {             // 두 점 사이의 거리를 구하는 함수. 
	                                                         // 제곱근시 실수가 나올수 있으므로 반환형 double 사용.
	int a;
	double b;                                                // 제곱근을 수행한 결과가 실수가 나올수 있으므로

	a = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
	b = sqrt(a);

	return b;                                                // 결과 b의 값 반환.
}
