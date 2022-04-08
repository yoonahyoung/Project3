#include <iostream>
using namespace std;
//기본(Base) 클래스와 이를 상속받는 파생(Derived) 클래스


class Base {
public:
	Base() : s("Base") {
		std::cout << "Contructor of Base Class\n";
	};
	~Base() {
		std::cout << "Destructor of Base Class\n";
	}
	void what() {
		std::cout << s << std::endl;
	}
private:
	std::string s;
};
class Derived : public Base {
public:
	Derived() : s("Derived"), Base() {
		std::cout << "Constructor of Derived Class\n";
	}
	~Derived() {
		std::cout << "Destroctor of Derived Class\n";
	}
	void what() {
		std::cout << s << std::endl;
	}
private:
	std::string s;
};

int main(void) {
	std::cout << "기본 클래스 생성\n";
	Base base;
	base.what();
	std::cout << "파생 클래스 생성\n";
	Derived derived;
	derived.what();
	return 0;
}

