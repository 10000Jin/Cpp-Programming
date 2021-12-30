/*
간단한 메뉴 시스템 작성. 메뉴를 선택하고 사용자로부터 입력을 받아서 입력이 올바른지 검사. 
메뉴를 실제로 실행할 필요는 없지만 메뉴의 이름을 화면에 출력하고 다시 반복한다.
1. 메뉴를 화면에 출력하고 원하는 메뉴를 선택하라는 메시지를 내보내는 함수 print_menu()작성.
2. 사용자로 부터 정수를 읽고 메뉴 번호의 상한과 하한을 넘지 않았는지 검사하는 함수 get_menu_number() 작성.
   만약 입력된 정수가 상한과 하한을 벗어나면 print_menu()을 호출, 범위 안에 들면 메뉴를 처리하는 함수 호출.
3. 메뉴를 처리하는 함수 작성. 메뉴에 해당하는 함수가 호출되면 메뉴가 호출되었다는 메시지만을 출력후 종료.
*/

#include <iostream>
using namespace std;

void print_menu();                             // 메뉴를 출력하는 함수 원형.
void get_menu_number(int a);                   // 입력받은 값이 상한과 하한 사이의 값인지 검사하는 함수 원형.
void menu_process(int a);                      // 메뉴를 처리하는 함수 원형.

int main() {

    int num;
    do {                                       // do while문을 사용하여 사용자가 종료를 선택하면 반복문 종료.
        print_menu();                          // 메뉴를 출력하는 함수 호출.
        cin >> num;                            // num 변수에 입력한값 저장.

        get_menu_number(num);                  // 상한과 하한 사이의 값인지 검사하는 함수 호출.
    } while (num != 4);                        // do while문을 사용하여 사용자가 종료를 선택하면 반복문 종료.

    system("pause");
    return 0;
}

void print_menu() {                            // 메뉴를 출력하는 함수. 따로 반환하는 값이 없으므로 반환형은 void

    cout << "1, 햄버거" << endl;               // 메뉴판 출력,
    cout << "2. 치즈버거" << endl;
    cout << "3. 샌드위치" << endl;
    cout << "4. 종료" << endl;
    cout << "원하는 메뉴를 선택하시오." << endl;
}

void get_menu_number(int a) {                  // 입력받은 값이 상한과 하한을 벗어나는지 검사하는 함수.

    if (a < 1 || a > 4) {                      // if문과 논리 연산자를 사용해 상한과 하한 사이를 벗어나면
        cout << "잘못된 번호를 선택하였습니다.\n" << endl;      // 잘못된 번호를 입력했다고 알려주고      
        print_menu();                          // 메뉴판을 다시 출력.
    }
    else                                       // else문으로 입력된 값이 상한과 하한 사이이면  
        menu_process(a);                       // 메뉴를 처리하는 함수 호출, 
}

void menu_process(int a) {                     // 메뉴를 처리하는 함수.

    if (a == 1)                                // if esle문을 사용하여 입력받은 값이 1이면 햄버거 출력.
        cout << "햄버거를 선택하였습니다.\n\n";
    else if (a == 2)                           // 입력받은 값이 2면 치즈버거 출력.
        cout << "치즈버거를 선택하였습니다.\n\n";
    else if (a == 3)                           // 입력받은 값이 3이면 샌드위치 출력.
        cout << "샌드위치를 선택하였습니다.\n\n";
    else                                       // 입력받은 값이 1,2,3 도 아니라면 (4라면) 종료 출력.
        cout << "종료합니다.\n\n";
}