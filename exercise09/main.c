#include <stdio.h>
//https://edu.goorm.io/learn/lecture/201/%ED%95%9C-%EB%88%88%EC%97%90-%EB%81%9D%EB%82%B4%EB%8A%94-c%EC%96%B8%EC%96%B4-%EA%B8%B0%EC%B4%88/lesson/1271951/%EC%B0%B8%EC%A1%B0-%EC%97%B0%EC%82%B0%EC%9E%90

int main()
{
	int* p = NULL;
	int num = 15;

	p = &num;
	printf("포인터 p가 가리키는 값 : %d\n", *p);
	printf("num의 값 : %d\n\n", num);

	*p += 5;
	printf("포인터 p가 가리키는 값 : %d\n", *p);
	printf("num 값 : %d\n\n", num);

	(*p)++;
	printf("포인터 p가 가리키는 값 : %d\n", *p);
	printf("num 값 : %d\n\n", num);

	*p++;
	printf("포인터 p가 가리키는 값 : %d\n", *p);
	printf("num 값 : %d\n", num);

	return 0;
}
