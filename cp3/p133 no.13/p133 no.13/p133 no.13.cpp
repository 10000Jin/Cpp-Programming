/*
컴퓨터와 가위, 바위, 보 게임을 하는 프로그램 작성. 컴퓨터는 사용자에게 알리지 않고 가위, 바위, 보중에 하나를 선택하고
사용자는 프로그램의 입력 안내 메시지에 따라 3개중 하나 선택, 선택후 컴퓨터가 선택한것과 승패를 알려줌.
*/

#include <iostream>
#include <cstdlib>                                                                     // 난수를 발생시키기 위한 cstdlib 정처리기 사용.                                    
#include <ctime>                                                                       // 시간을 얻기위해 ctime 전처리기 사용
using namespace std;

int main() {

	int user_enter, com_enter;

	do {                                                                               // do while문을 사용하여 실행하고 4가 입력되면 반복문을 나옴.
        cout << "가위, 바위, 보중 하나를 선택하시오. (가위:1, 바위:2, 보:3, 종료:4) ";
        cin >> user_enter;                                                             // 사용자에게 어떤것을 낼건지 입력받음.
        cout << endl;

        srand((unsigned)time(NULL));                                                   // 시간을 기준으로 하여 난수발생시 실행시마다 다른 난수 발생.
        com_enter = 1 + rand() % 3;                                                    // 컴퓨터가 낼수 있는 가지수는 1,2,3 3가지 인데 rand()%3은
                                                                                       //  0,1,2 이므로 1을 더함.
        if (user_enter == 1) {                                                         // 사용자가 1(가위)를 입력시 괄호안 실행
             if (com_enter == 1)                                                        
                cout << "비겼습니다. 컴퓨터는 가위를 냈습니다.\n\n\n\n";               // if else문을 사용하여 각 경우를 설정.
            else if (com_enter == 2)
                cout << "컴퓨터가 이겼습니다. 컴퓨터는 바위를 냈습니다.\n\n\n\n";
            else
                cout << "당신이 이겼습니다. 컴퓨터는 보를 냈습니다.\n\n\n\n";
        }
        if (user_enter == 2) {                                                         // 사용자가 2(바위)를 입력시 괄호안 실행.
            if (com_enter == 1)
                cout << "당신이 이겼습니다. 컴퓨터는 가위를 냈습니다.\n\n\n\n";
            else if (com_enter == 2)
                cout << "비겼습니다. 컴퓨터는 바위를 냈습니다.\n\n\n\n";
            else
                cout << "컴퓨터가 이겼습니다. 컴퓨터는 보를 냈습니다.\n\n\n\n";
        }
        if (user_enter == 3) {                                                         // 사용자가 3(보) 입력시 괄호안 실행.
            if (com_enter == 1)
                cout << "컴퓨터가 이겼습니다. 컴퓨터는 가위를 냈습니다.\n\n\n\n";
            else if (com_enter == 2)
                cout << "당신이 이겼습니다. 컴퓨터는 바위를 냈습니다.\n\n\n\n";
            else
                cout << "비겼습니다. 컴퓨터는 보를 냈습니다.\n\n\n\n";
        }
	} while (user_enter != 4);                                                         // do while문을 사용하여 실행하고 4가 입력되면 반복문을 나옴.

	system("pause");
	return 0;
}