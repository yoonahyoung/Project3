#include <stdio.h>

int main()
{
	int num = 10;
	int* ptr;
	int** pptr;

	ptr = &num;
	pptr = &ptr;

	printf("num : %d, *ptr : %d, **ptr : %d\n", num, *ptr, **pptr);
	printf("num 주소 : %d, ptr 값 : %d, **ptr 값 : %d\n", &num, ptr, *pptr);
	printf("ptr 주소 : %d, pptr 값 : %d", &ptr, pptr);

	return 0;
}

/*#include <stdio.h>

int main()
{
		int num1 = 10, num2 = 20, num3 = 30;
		int *parr[3];

		parr[0] = &num1;
		parr[1] = &num2;
		parr[2] = &num3;

		for(int i=0; i<3; i++)
		{
			printf("parr[%d] : %d\n", i, *parr[i]);
		}

		return 0;
}*/
