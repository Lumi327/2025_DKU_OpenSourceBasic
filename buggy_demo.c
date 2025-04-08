#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void cause_segfault()
{
    int* ptr = NULL;

    *ptr = 42; // Segmentation fault 발생
}

void out_of_bounds()
{
    int arr[5];

    for(int i = 0; i <= 5; i++) {
        arr[i] = i * 10; // 인덱스 5 접근 (범위 초과)
    }
}

void null_string_copy()
{
    char* src = NULL;
    char dest[10];

    strcpy(dest, src); // NULL 포인터 복사
}

int main()
{
    int option;

    printf("버그 테스트를 선택하세요:\n");
    printf("1. Segfault\n2. 배열 인덱스 오류\n3. NULL 문자열 복사\n");
    scanf("%d", &option);

    if(option == 1) {
        cause_segfault();
    } else if(option == 2) {
        out_of_bounds();
    } else if(option == 3) {
        null_string_copy();
    } else {
        printf("잘못된 선택입니다.\n");
    }

    return 0;
}
