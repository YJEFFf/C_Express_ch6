#include <stdio.h>

int main()
{
    double avg_weight, user_weight, user_height;

    printf("체중과 키를 입력하세요: ");
    scanf("%lf %lf", &user_weight, &user_height);
    avg_weight = (user_height - 100.0) * 0.9;

    if (avg_weight > user_weight)
        printf("저체중입니다.\n");
    else if (avg_weight < user_weight)
        printf("과체중입니다.\n");
    else
        printf("표준입니다.\n");

    return 0;
}