#include<iostream>
using namespace std;

//this 포인터
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
};

class Student :public Human {
private:
	char grade;
	Student(int _height, int _weight, int _race, char grade) :Human(_height, _weight, _race) {
		grade = grade;
	}
	//...생략...//
};


Student(int _height, int _weight, int _race, char grade) :Human(_height, _weight, _race) {
	this->grade = grade;
}

class Student :public Human {
private:
	char grade;
public:
	Student(int _height, int _weight, int _race, char grade) :Human(_height, _weight, _race) {
		cout << "this 포인터의 주소" << this << endl;
		this->grade = grade;
	}
	//...생략...//
};

int main() {

	Animal* student = new Student(165, 55, 0, 'A');
	cout << "student의 주소" << student << endl;
	student->printInfo();
	delete(student);
}
