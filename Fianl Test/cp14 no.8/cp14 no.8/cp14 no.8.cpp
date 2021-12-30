#include <iostream>
#include <string>
using namespace std;

class GameCharacter {
	
public:
	GameCharacter() {
		cout << "GameCharacter ������ ȣ��" << endl;
	}
	virtual ~GameCharacter() {
		cout << "GameCharacter �Ҹ��� ȣ��" << endl;
	}
	virtual void draw() = 0;
};
class Hobit : public GameCharacter {

public:
	Hobit() {
		cout << "Hobit ������ ȣ��" << endl;
	}
	virtual ~Hobit() {
		cout << "Hobit �Ҹ��� ȣ��" << endl;
	}
	virtual void draw() {
		cout << "ȣ���� �׸��ϴ�." << endl;
	}
};
class Titan : public GameCharacter {

public:
	Titan() {
		cout << "Titan ������ ȣ��" << endl;
	}
	virtual ~Titan() {
		cout << "Titan �Ҹ��� ȣ��" << endl;
	}
	virtual void draw() {
		cout << "Ÿ��ź�� �׸��ϴ�." << endl;
	}
};
class Magichine : public GameCharacter {

public:
	Magichine() {
		cout << "Magichine ������ ȣ��" << endl;
	}
	virtual ~Magichine() {
		cout << "Magichine �Ҹ��� ȣ��" << endl;
	}
	virtual void draw() {
		cout << "�ּ����� �׸��ϴ�." << endl;
	}
};

int main() {
	
	GameCharacter* array[3];

	array[0] = new Hobit();
	array[1] = new Titan();
	array[2] = new Magichine();

	for (int i = 0; i < 3; i++) {
		array[i]->draw();
	}
	for (int i = 0; i < 3; i++) {
		delete array[i];
	}
	return 0;
}