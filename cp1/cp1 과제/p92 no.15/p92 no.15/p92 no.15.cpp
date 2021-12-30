/*
구의 표면적과 체적을 구하라. 구의 반지름은 실수로 입력
A = 4*pi*r^2,  V = (4/3)*pi*r^3 사용.
*/

#include <iostream>
#include <cmath>                                    // pow()를 사용하기 위해 cmath 전처리기 사용
using namespace std;

#define PI 3.141592;                                // 원주율 pi값을 저장
int main() {
	
	double r, A, V;                                 // 값이 실수가 나올수 있으니 double형 변수 선언

	cout << "구의 반지름을 일력하시오: ";
	cin >> r;
	cout << endl;
	
	A = pow(r, 2.0) * 4.0 * PI;                     // 제곱을 위해 pow() 함수 사용
	V = pow(r, 3.0) * (4.0 / 3.0) * PI;             // 4.0, 3.0 대신 정수형으로 쓰면 나누기가 제대로 되지 않고 
	                                                // 나눗셈의 결과가 정수부분만 나오므로 실수형으로!
	cout << "구의 표면적: " << A << endl;
	cout << "구의 체적: " << V << endl;

	system("pause");                                // exe파일 실행시 바로 종료 되지 않기 위해 작성
	return 0;
}