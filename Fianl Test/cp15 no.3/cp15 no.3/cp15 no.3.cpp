#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
	ifstream is;
	ofstream os;
	int num=0, count=0;
	string name, phone, email;

	os.open("test.txt");
	if (!os) {
		cout << "파일 오픈에 실패하였습니다." << endl;
	}
	cout << "번호, 이름, 전화번호, 이메일을 입력하시오" << endl;
	while (!os.eof()) {
		cin >> num >> name >> phone >> email;
		os << num << name << phone << email << endl;
		count++;
	}
	os.close();

	is.open("test.txt");
	if (!os) {
		cout << "파일 오픈에 실패하였습니다." << endl;
	}
	cout << "번호를 입력하시오" << endl;

}
