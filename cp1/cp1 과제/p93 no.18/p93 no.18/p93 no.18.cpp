/*
2차 방정식 a*x^2 + b*x + c의 근을 구하라.
정수 a, b, c값을 입력받고 제곱근은 Math.sqrt() 함수 사용.
*/

#include <iostream>
#include <cmath>                                            // pow(), sqrt()를 사용하기 위해 cmath 전처리기 사용
using namespace std;

int main() {

	int a, b, c, d, e, f, g, D;                             // 변수 선언

	cout << "a값 입력: ";
	cin >> a;
	cout << "b값 입력: ";
	cin >> b;
	cout << "c값 입력: ";
	cin >> c;
	cout << endl;

	D = pow(b, 2) - 4 * a * c;                              // pow() 함수를 사용한 판별식 D

	d = ((-1) * b + sqrt(D)) / (2 * a);                     // sqrt() 함수를 사용한 근의 공식
	e = ((-1) * b - sqrt(D)) / (2 * a);

	f = ((-1) * b) / (2 * a);                               // 허근을 가질때 근의 정수부분 
	g = sqrt(-D) / (2 * a);                                 // 허근을 가질떄 근의 허수부분, sqrt()안에 
															// 음수가 올수 없으므로 판별식 값을 -해 양수로 만듦

	(D == 0) ? (printf("근은 %d입니다.", d)) : (D > 0) ? (printf("근은 %d, %d입니다.", d, e)) : (printf("근은 %d+%di, %d-%di입니다.", f, g, f, g));

	// 조건 연산자와 printf문을 사용하여 판별식이 0일떄 d값 출력 아니면 0보다 클떄 d, e값 출력 아니면 f, g값 출력 (허수 i는 직접 출력)

	system("pause");                                        // exe파일 실행시 바로 종료 되지 않기 위해 작성
	return 0;
}