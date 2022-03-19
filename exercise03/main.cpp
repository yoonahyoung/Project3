#include<iostream>
using namespace std;

//virtual 키워드
/*만약 자신을 상속받는 자식 클래스의 객체가 자신의 메소드를 사용하는데, 이것을 오버라이딩했다면
자식 클래스의 객체 메소드를 호출하라고 지정하는 방법은 메소드 앞에 virtual 키워드를 사용하는 것입니다.
자신의 메소드는 가상으로 만들어져 있으니 자식의 메소드를 호출하라는 의미가 되겠죠.
그래서 우리의 목표를 달성하기 위해서는 Animal 클래스의 printInfo메소드 앞에 virtual 키워드를 추가하면 됩니다.
그렇게 되면 Human의 printInfo 메소드를 호출하게 됩니다.*/

class Animal {
private:
	int height;
	int weight;
public:
	Animal(int _height, int _weight) :height(_height), weight(_weight) {}
	virtual void printInfo() {
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

//virual키워드를 사용해야 자식 객체의 메소드를 사용한다고 했죠? 그렇다면 다음의 상황을 예측해봅시다.

class Human :public Animal {
private:
	int race;
public:
	//...생략...//
	void printInfo() {
		//...생략...//
	}
};

class Student :public Human {
private:
	char grade;
public:
	Student(int _height, int _weight, int _race, char _grade) :Human(_height, _weight, _race) {
		grade = _grade;
	}

	void printInfo() {
		Human::printInfo();
		cout << "성적:" << grade << endl;
	}
};
/*Human 클래스는 printInfo에 virtual키워드를 넣지 않았습니다.
Student는 Human클래스를 상속받고 있는데, 
이때 printInfo는 Human의 printInfo를 호출할까요 ? 
메소드의 virtual이 지정되면 이후 자식은 자동으로 virtual 키워드가 적용이 됩니다.
그래서 결론은 Student의 printInfo가 호출이 되지요.
하지만 명시적으로 virtual을 지정해주는 것이 관례입니다.
코드의 가독성과 이해를 돕기 위해서지요.

자, 이런 다형성은 언제 필요할까요 ? 
예를 들면 함수에서 해당 클래스를 상속하는 모든 객체를 받을 때가 그 예가 됩니다.
아래의 함수에서 변수로 animal를 가리키는 포인터를 받습니다.
이 함수의 목적은 animal인 객체의 printInfo를 출력하는 것인데,
Animal클래스를 상속하는 모든 객체를 받을 수 있습니다.
*/
void printInfo(Animal* animal) {
	animal->printInfo();
}
