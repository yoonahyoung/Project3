#include <iostream>
using namespace std;

//오버라이딩

class Animal {
private:
	int height;
	int weight;
public:
	Animal(int _height, int _weight) :height(_height), weight(_weight) {}
	void printInfo() {
		cout << "==============정보=============" << endl; ;
		cout << "키:" << height << "무게:" << weight << endl;
	}
	int getHeight() {
		return height;
	}
	int getWeight() {
		return weight;
	}
};

class Human :public Animal {
private:
	int race;
public:
	Human(int _height, int _weight, int _race) :Animal(_height, _weight) {
		race = _race;
	}
	void printInfo() {
		cout << "==============정보=============" << endl;
		cout << "키:" << getHeight() << "무게:" << getWeight() << endl;
		cout << "인종:";
		if (race == 0)
			cout << "황인" << endl;
		else if (race == 1)
			cout << "흑인" << endl;
		else if (race == 2)
			cout << "백인" << endl;
		else
			cout << "혼혈" << endl;
	}


	/* 
	void printInfo() {
	Animal::printInfo();
	cout << "인종:";
	if (race == 0)
		cout << "황인" << endl;
	else if (race == 1)
		cout << "흑인" << endl;
	else if (race == 2)
		cout << "백인" << endl;
	else
		cout << "혼혈" << endl;
} 
부모클래스의 함수를 이용하여 자식클래스에서 같은 메소드 이름으로 새로운 기능을 덧붙이는 방식
*/
};
int main() {

	Animal* animal = new Animal(50, 20);
	animal->printInfo();

	Human* human = new Human(150, 80, 3);
	human->printInfo();
	delete(animal);
	delete(human);
}

