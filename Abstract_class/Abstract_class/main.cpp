#include <iostream>
#include <string>
using namespace std;

class Weapon {
public:
	virtual void Shoot() = 0;
};

class Gun : public Weapon {
public:
	void Shoot() override {
		cout << "BANG!" << endl;
	}
};

class SubmashineGun : public Weapon {
public:
	void Shoot() override {
		cout << "BANG! BANG! BANG!" << endl;
	}
};

class Bazooka : public Weapon {
public:
	void Shoot() override {
		cout << "BADABUM!" << endl;
	}
};

class  Knife : public Weapon
{
public:
	void Shoot() override {
		cout << "VJUH!" << endl;
	}
};


class Player {
public:
	void Shoot(Weapon* weapon) {
		weapon->Shoot();
	}
};

int main() {

	Gun gun;
	SubmashineGun muchinegan;
	Bazooka bazooka;
	Knife knife;

	Player player;



	player.Shoot(&gun);
	player.Shoot(&muchinegan);
	player.Shoot(&bazooka);
	player.Shoot(&knife);

	system("pause");
	return 0;
}