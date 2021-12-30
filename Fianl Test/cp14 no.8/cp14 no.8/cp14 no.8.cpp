#include <iostream>
#include <string>
using namespace std;

class GameCharacter {
	
public:
	GameCharacter() {
		cout << "GameCharacter 생성자 호출" << endl;
	}
	virtual ~GameCharacter() {
		cout << "GameCharacter 소멸자 호출" << endl;
	}
	virtual void draw() = 0;
};
class Hobit : public GameCharacter {

public:
	Hobit() {
		cout << "Hobit 생성자 호출" << endl;
	}
	virtual ~Hobit() {
		cout << "Hobit 소멸자 호출" << endl;
	}
	virtual void draw() {
		cout << "호빗을 그립니다." << endl;
	}
};
class Titan : public GameCharacter {

public:
	Titan() {
		cout << "Titan 생성자 호출" << endl;
	}
	virtual ~Titan() {
		cout << "Titan 소멸자 호출" << endl;
	}
	virtual void draw() {
		cout << "타이탄을 그립니다." << endl;
	}
};
class Magichine : public GameCharacter {

public:
	Magichine() {
		cout << "Magichine 생성자 호출" << endl;
	}
	virtual ~Magichine() {
		cout << "Magichine 소멸자 호출" << endl;
	}
	virtual void draw() {
		cout << "주술사을 그립니다." << endl;
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