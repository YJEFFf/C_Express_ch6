#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int com, user;
    srand(time(NULL));
    com = (rand() % 3 + 1);
    printf("선택하시오(1: 가위 2: 바위 3: 보)");
    scanf("%d", &user);

    if (com == user)
        printf("비겼음\n");
    else if ((com == 1 && user == 2) || (com == 2 && user == 3) || (com == 3 && user == 1))
        printf("사용자가 이겼음\n");
    else
        printf("컴퓨터가 이겼음\n");
    return 0;
}