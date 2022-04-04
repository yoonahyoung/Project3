#include <stdio.h>
//중첩 구조체
typedef struct {
	char name[15];
	int age;
} Teacher;

typedef struct {
	char name[15];
	int age;
	Teacher teacher;
} Student;
/*자기참조 구조체
typedef struct {
	char name[15];
	int age;
	struct Student *ptr;
} Student;*/
int main() {
	Student Student;
	Teacher Teacher;

	Student.teacher.age = 30;
	Teacher.age = 40;

	return 0;
}


