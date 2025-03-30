#include <stdio.h>

int     main()
{
        int a;

        printf("Ente a number: ");
        scanf("%d", &a);

        if(a != 10)
            printf("Your number is not 10");
        else
            printf("Your numbe is 10");
        return (0);

}