#include <iostream>
using namespace std;

class A {
private:
	int a;
	int b;
public:
	A(int _a, int _b) {
		a = _a;
		b = _b;
	}
	int add() {
		return a + b;
	}
};

class B : A {
public:
	B(int _a, int _b) : A(_a, _b) {}
	void printResult() {
		//A를 상속받았으니, 부모클래스의 add라는 메소드를 사용할 수 있음.
		printf("%d\n", add());
	}
};

int main() {
	B b(1, 2);
	b.printResult();
}

/*
//private 상속

class A {
private:
	int a;
protected:
	int b;
public:
	int c;
};

class B : private A { //b,c멤버 변수는 private 멤버로 접근 범위 졻혀짐

};


int main() {
	B b;
    //a = private, b = private, c = private
	b.a;
	b.b;
	b.c;
}*/


/*
//protected 상속

class A {
private:
	int a;
protected:
	int b;
public:
	int c;
};

class B : protected A { //c멤버 변수는 protected 멤버로 접근 범위 졻혀짐

};


int main() {
	B b;

	//a = private, b = protected, c = protected
	b.a;
	b.b;
	b.c;
}*/


/*
//public 상속 

class A {
private:
	int a;
protected:
	int b;
public:
	int c;
};

class B : public A { //멤버 변수의 접근 제한에 변화없음

};


int main() {
	B b;

	//a = private, b = protected, c = public
	b.a;
	b.b;
	b.c;
}

*/


/*
//캡슐화(encapsulation)

class A {
private:
	int a;
	int b;
public:
	void setA(int _a) {
		if (_a > 50)
			_a = 50;
		a = _a;
	}
	void setB(int _b) {
		if (_b > 100)
			_b = 100;
		b = _b;
	}

	int getA() {
		return a;
	}
	int getB() {
		return b;
	}
};

class B : A {
public :
	void setAB(int a,int b) {
		setA(a);
		setB(b);
	}
	void printResult() {
		printf("%d + %d = %d\n", getA(), getB(), getA() + getB());
	}
};


int main() {
	B b;
	b.setAB(100, 200);
	b.printResult();
}
 B는 A를 상속받습니다.
 이때 a,b는 직접 설정할 수 없게 private로 접근을 제한했구요.
 메인 함수에서는 b에서 setAB를 호출해서 a의 값을 100, b의 값을 200으로 바꾸려고 합니다. 
 하지만 A 클래스는 그것을 용납하지 않습니다. 
 a의 최대값은 50, b의 최대값은 100으로 제한을 해놓았기 때문이죠. 
 B가 a와 b를 변경할 수 있는 수단은 A 클래스의 setA와 setB를 호출하여 인자 전달을 하는 방법밖에 없습니다. 
 이렇게 멤버의 값을 함부로 변경할 수 없도록 맴버 함수로 껍질을 입히는 작업을 캡슐화라고 합니다. 
 이렇게 Get, Set 메소드를 Getter, Setter메소드라고 합니다.

*/

