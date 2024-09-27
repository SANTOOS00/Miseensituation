#include<stdio.h>
int main()
{
    int num;

    printf("number :");
    scanf("%d",&num);

    if (num % 2 == 0)
    {
        printf ("ce n'est pas un nomber premier :)");
    }
    if (0 != num % 2)
    printf("c'est un nomber premier :");
}