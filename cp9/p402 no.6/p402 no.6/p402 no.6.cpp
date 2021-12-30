#include <iostream>
using namespace std;

class Complex {										//Complex 클래스 선언
private:											// 외부 접근 제한
	double real_num1, real_num2;					// 각 복소수의 실수부분
	double img_num1, img_num2;						// 각 복소수의 허수부분
	double real_result1, real_result2;				// 실수부분의 계산결과
	double img_result1, img_result2;				// 허수부분의 계산결과
	bool check;										// 덧셈인지 뺄셈인지 확인하는 변수

public:												// 외부 접근 허용
	double get_1st_num() {							// 첫번째 복소수의 접근자 함수
		return real_num1, img_num1; 
	}
	double get_2nd_num() {							// 두번째 복소수의 접근자 함수
		return real_num2, img_num2; 
	}
	void set_1st_num(double a, double b) {			// 첫번째 복소수의 설정자 함수
		real_num1 = a;								// 매계변수로 받은 값을 각 변수에 저장
		img_num1 = b;
	}
	void set_2nd_num(double a, double b) {			// 두번째 복소수의 설정자 함수
		real_num2 = a;								// 매계변수로 받은 값을 각 변수에 저장
		img_num2 = b;
	}
	void add() {									// 두 복소수의 합을 계산하는 함수
		real_result1 = real_num1 + real_num2;
		img_result1 = img_num1 + img_num2;
		check == 1;									// check에 1저장
	}
	void subtrac() {								// 두 복소수의 차를 계산하는 함수
		real_result2 = real_num1 - real_num2;
		img_result2 = img_num1 - img_num2;
		check == 0;									// check에 2저장
	}
	void print() {									// 결과를 출력하는 함수
		cout << "첫번째 복소수: " << real_num1 << "+" << img_num1 << "i" << endl;
		cout << "두번째 복소수: " << real_num2 << "+" << img_num2 << "i" << endl;
		if(check)									// check가 1이면 합 결과 출력
			cout << "두 복소수의 합: " << real_result1 << "+" << img_result1 << "i" << endl;
		cout << "두 복소수의 차: " << real_result2 << "+" << img_result2 << "i" << endl;
	}												// check가 0이면 차 결과 출력
};

int main() {
	Complex num;									// Complex 클래스의 num 객체 생성 

	num.set_1st_num(8.4, 10.8);						// 첫번째 복소수 간접적 초기화
	num.set_2nd_num(3.6, 7.1);						// 두번째 복소수 간접적 초기화
	num.add();										// 두 복소수의 합 계산
	num.subtrac();									// 두 복소수의 차 계산
	num.print();									// 결과를 출력

	system("pause");
	return 0;
}