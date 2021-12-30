#include <iostream>
#include <string>
using namespace std;

class HomAppliance {

public:
	HomAppliance() {
		cout << "HomAppliance ������ ȣ��" << endl;
	}
	virtual ~HomAppliance() {
		cout << "HomAppliance �Ҹ��� ȣ��" << endl;
	}
	virtual void getprice() = 0;
};
class Televison : public HomAppliance {
	int price;
	string name, maker;
public:
	Televison(int p, string n, string m) : HomAppliance(), price(p), name(n), maker(m) {
		cout << "Televison ������ ȣ��" << endl;
	}
	virtual ~Televison() {
		cout << "Televison �Ҹ��� ȣ��" << endl;
	}
	virtual void getprice() {
		cout << name << " Televison�� ���� : " << price << endl;
	}
};
class Refrigerator : public HomAppliance {
	int price;
	string name, maker;
public:
	Refrigerator(int p, string n, string m) : HomAppliance(), price(p), name(n), maker(m) {
		cout << "Refrigerator ������ ȣ��" << endl;
	}
	virtual ~Refrigerator() {
		cout << "Refrigerator �Ҹ��� ȣ��" << endl;
	}
	virtual void getprice() {
		cout << name << " Refrigerator�� ���� : " << price << endl;
	}
};

int main() {
	
	HomAppliance* array[3];

	array[0] = new Televison(100, "a", "A");
	array[1] = new Refrigerator(300, "b", "B");
	array[2] = new Televison(500, "c", "A");

	array[0]->getprice();
	array[1]->getprice();
	array[2]->getprice();

	for (int i = 0; i < 3; i++) {
		delete array[i];
	}

	return 0;
}