/*
은행으로부터 대출받은 금액에 대한 이자를 계산하는 프로그램을 작성. 사용자로부터 대출 금액과 이율을
get_input()함수를 통하여 입력받음. get_input()에서 래퍼런스 매개 변수를 사용.원금을 상황하지 않고
이자만 낸다고 가정했을 때 한달 이자를 계산하여 출력.
*/

#include <iostream>
using namespace std;

void get_input(int &money, int &interest);					// 대출금액과 이율을 입력받는 함수원형

int main() {

	int money2, interest2, result;

	get_input(money2, interest2);							// 대출금액과 이율을 입력받는 함수 호출.
															// &money=money2, &interest=interest2
	result = money2 * interest2 / 100;						// 이자를 계산하여 result 저장.
	cout << "이자는 " << result << "입니다." << endl;

	system("pause");
	return 0;
}

void get_input(int &money, int &interest) {					// 대출금액과 이율을 입력받는 함수.
															// &money=money2, &interest=interest2
	cout << "대출 금액을 입력하시오." << endl;
	cin >> money;
	cout << "이자를 입력하시오.(%)" << endl;
	cin >> interest;
	cout << endl;
}