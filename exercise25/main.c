#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h> // C언어 bool 타입 
 
int main(void)
{
    char str[100];
 
    while (true)
    {
        printf("문장 입력 : ");
        scanf("%s", str);
        
        printf("입력한 문장 : %s\n\n", str);
    }
 
    return 0;
}


출처: https://blockdmask.tistory.com/471 [개발자 지망생]
