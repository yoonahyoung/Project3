#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//난수만들기
int main()
{
	srand(time(NULL));

	int random = rand();

	printf("%d", random);

	return 0;
}
