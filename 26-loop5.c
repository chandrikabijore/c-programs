#include <stdio.h>
void main()
{
    int a;
    printf("enter the rows and coloums :");
    scanf("%d", &a);
    for (int i = 1; i <= a * a; i++)
    {
        printf("* ");
        if (i % a == 0)
        {
            printf("\n");
        }
    }
}
