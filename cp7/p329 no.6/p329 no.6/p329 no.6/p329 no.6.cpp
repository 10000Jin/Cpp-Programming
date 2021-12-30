/*
사용자가 월급과 소득세율를 인자로 주면 월급에 소득세를 추가하여서 반환하는 함수 add_tax()를 작성.
월급은 레퍼런스 타입으로 전달되며 소득세율이 주어지지 않으면 20%를 디폴트값으로 하라.
*/

#include<iostream>
using namespace std;

void add_tax(int &ref, int r = 20);							// 월급과 소득세율을 계산하는 함수 원형.
															// 소득세율 r은 주지어지지 않으면 defult값 20으로 설정.
int main() {
	int salary, rate;

	cout << "월급을 입력하시오." << endl;
	cin >> salary;
	cout << "소득세율을 입력하시오. (%) (디폴트값 사용시 -1 입력.)" << endl;
	cin >> rate;
	cout << endl;

	if (rate == -1)											// 소득세율이 -1이라면 
		add_tax(salary);									// add_tax()함수를 호출하고 월급만 매개변수로 넘겨줌
	else if(rate > 0)										// 소득세율이 0 이상이라면
		add_tax(salary, rate);								// add_tax()함수에 월급과 소득세율을 매개변수로 넘겨줌.
	
	system("pause");
	return 0;
}

void add_tax(int &ref, int r) {								// 월급과 소득세율을 계산하는 함수
															// 월급에 대한 매개변수를 레퍼런스 타입으로 받음.
	int result;

	result = ref + (ref * r / 100);							// 월급에 월급과 소득세율을 곱한값을 더함.
	cout << "결과는 " << result << "입니다." << endl;
}