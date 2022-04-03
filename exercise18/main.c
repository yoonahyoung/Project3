#include <stdio.h>
//구조체 포인터
typedef struct {
	int s_id;
	int age;
} Student;

int main() {
	Student goorm;
	Student* ptr;

	ptr = &goorm;

	(*ptr).s_id = 1004;
	(*ptr).age = 20;

	printf("goorm의 학번 : %d, 나이: %d\n", goorm.s_id, goorm.age);
}

/*화살표 기호 사용
#include <stdio.h>

typedef struct {
    int s_id;
    int age;
} Student;

int main(){
    Student goorm;
    Student *ptr;

    ptr = &goorm;

    (*ptr).s_id = 1004;
    ptr->age = 20;

    printf("goorm의 학번 : %d, 나이: %d\n", goorm.s_id, goorm.age);
}
*/
