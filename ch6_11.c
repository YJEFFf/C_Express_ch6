#include <stdio.h>

int main()
{
    char ch;

    printf("문자를 입력하시오: ");
    ch = getchar();

    switch (ch)
    {
    case 'R':
    case 'r':
        printf("Rectangle\n");
        break;
    case 'T':
    case 't':
        printf("Triangle\n");
        break;
    case 'C':
    case 'c':
        printf("Circle\n");
        break;
    default:
        printf("Unknown\n");
        break;
    }

    return 0;
}