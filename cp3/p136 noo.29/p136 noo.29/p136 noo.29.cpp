/*
피타고라스의 정리는 직각 삼각형에서 직각을 낀 두 변의 길이를 a, b라 하고 빗변의 길이를 c라 히면 a^2+b^2=c^2 
각변의 길이가 100보다 작은 삼각형중 피타고라스의 정리가 성립되는 직각 삼각형은 몇개? 
3중 반복문을 사용하여 피타고라스 정리를 만족하는 3개의 정수를 찾는다.
*/

#include <iostream>
using namespace std;

int main() {

	int count=0;
	cout << "a b c는 각각\n";                                     // 삼격형의 변의 길이 출력전 해당하는 변을 알수있게함.

	for (int a = 1; a < 100; a++) {                               // a,b,c 각 변은 1보다 크고 100보단 작음
		for (int b = 1; b < 100; b++) {                           // a,b,c 각 변을 반복문을 통해 증가하며 비교.
            for (int c = 1; c < 100; c++) {

                if (a * a + b * b == c * c) {                     // 만약 a^2+b^2=c^2이라면

                cout << a << " " << b << " " << c << endl;        // 피타고라스 정리가 성립되므로 각 변을 출력.
                count++;                                          // 그리고 성립되는 삼각형을 찾았으니 count를 1증가.
                }
			}
		}
	}
	cout << count << "개 입니다." << endl;

	system("pause");
	return 0;
}