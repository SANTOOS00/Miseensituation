#include<stdio.h>
int main()
{
    int num;

    printf("temperature :");
    scanf ("%d",&num);

    if (num == 37)
    {
        printf("votre temperature est normale");
    }
    else if (num >= 37.5)
    {
        printf("Vous avez de la fievre");
    }
    return 0;
}