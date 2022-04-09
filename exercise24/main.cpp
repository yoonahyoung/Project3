#include <iostream>
using namespace std;
//다형성을 만족시키는 virtual 키워드
//가상함수

class Base {
public:
	Base() : s("Base") {
		std::cout << "Contructor of Base Class\n";
	};
	virtual void what() {
		std::cout << "--- Base Class의 what ---\n";
	}
private:
	std::string s;
};
class Derived : public Base {
public:
	Derived() : s("Derived"), Base() {
		std::cout << "Constructor of Derived Class\n";
	}
	void what() {
		std::cout << "--- Derived Class의 what ---\n";
	}
private:
	std::string s;
};

int main(void) {
	Base base;
	Derived derived;
	Base* p_base1 = &base;
	Base* p_base2 = &derived;
	p_base1->what();
	p_base2->what();
	return 0;
}

