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
		cout << "���� ���¿� �����Ͽ����ϴ�." << endl;
	}
	cout << "��ȣ, �̸�, ��ȭ��ȣ, �̸����� �Է��Ͻÿ�" << endl;
	while (!os.eof()) {
		cin >> num >> name >> phone >> email;
		os << num << name << phone << email << endl;
		count++;
	}
	os.close();

	is.open("test.txt");
	if (!os) {
		cout << "���� ���¿� �����Ͽ����ϴ�." << endl;
	}
	cout << "��ȣ�� �Է��Ͻÿ�" << endl;

}
