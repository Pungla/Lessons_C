#include <iostream>
#include <string>
using namespace std;

class Gun {
public:
	virtual void Shoot(){
		cout << "BANG!" << endl;
	}
};

class SubmashineGun : public Gun{
public:
	void Shoot() override{
		cout << "BANG! BANG! BANG!" << endl;
	}
};

class Bazooka : public Gun {
public:
	void Shoot() override {
		cout << "BANDBUM!" << endl;
	}
};


class Player {
public:
	void Shoot(Gun* gun) {
		gun->Shoot();
	}
};

int main() {

	Gun gun;
	SubmashineGun muchinegan;
	Bazooka bazooka;
	Player player;

	player.Shoot(&gun);
	player.Shoot(&muchinegan);
	player.Shoot(&bazooka);

	system("pause");
	return 0;
}