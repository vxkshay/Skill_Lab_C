#include<stdio.h>
int main()
{

    printf("Hii Welcome to Skill Lab");
    for (int i = 1; i < 11; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}