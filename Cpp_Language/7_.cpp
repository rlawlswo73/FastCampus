#include<iostream>
#include<string>

using namespace std;

class Character {
private:
	string name;
	int ragePoint;
	int hp;
	int damage;
public:
	Character(string name, int hp, int damage) : name(name), ragePoint(0), hp(hp), damage(damage) {}
	/*Character(const Character& other) {
		name = other.name;
		ragePoint = other.ragePoint;
		hp = other.hp;
		damage = other.damage;
	}*/
	~Character() { // 객체가 소멸할때 자동으로 사용되는 함수.
		cout << "[객체가 소멸됩니다.]\n";
	}

	void pointUp() { ragePoint++; }
	void show() {
		cout << name << "[" << ragePoint << "]" << hp << " " << damage << "\n";
	}
};

int main(void) {
	//Character character1("슬라임", 10, 20);
	Character* character1 = new Character("슬라임", 10, 20);
	character1->pointUp();
	Character character2(*character1); // 다른 객체의 주소를 넘겨주면 그 객체로 자동으로 초기화.
	character2.pointUp();
	character1->show();
	character2.show();

	delete character1; // 동적 할당을 이용했으므로 성공정으로 소멸됨.
	//delete &character2; <<< 동적 할당을 하지 않았기 때문에 오류 발생.

	system("pause");
}