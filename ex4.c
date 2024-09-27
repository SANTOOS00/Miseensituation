#include <stdio.h>
int main()
{
    int  num[100] = {2,3,4,5,6};
    int  i;
    printf("entree : ");
    scanf ("%d",&i);
    while (num[i])
    {
        printf("%d\n",num[i]);
        i++;
    }
    return(0);
}