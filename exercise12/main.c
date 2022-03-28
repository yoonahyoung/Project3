#include <stdio.h>
//포인터 연산과 배열
/*
int main()
{
	int arr[5] = { 10, 20, 30, 40, 50 };
	int* arrPtr = arr;

	printf("%d\n", *arrPtr);
	printf("%d\n", arr[0]);

	return 0;
}
*/
#include <stdio.h>

int main()
{
	int arr[5] = { 10, 20, 30, 40, 50 };
	double arr2[5] = { 10.1, 20.2, 30.3, 40.4, 50.5 };
	int* arrPtr = arr;
	double* arrPtr2 = arr2;

	printf("포인터 주소 : %d %d\n", arrPtr++, arrPtr2++);
	printf("증가 연산 후 : %d %d\n", arrPtr, arrPtr2);
	printf("변수 값 : %d %.2f\n", *arrPtr, *arrPtr2);

	arrPtr += 2;
	arrPtr2 += 2;

	printf("증가 연산 후 : %d %d\n", arrPtr, arrPtr2);
	printf("변수 값 : %d %.2f\n", *arrPtr, *arrPtr2);

	return 0;
}
