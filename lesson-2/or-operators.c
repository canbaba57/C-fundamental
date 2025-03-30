#include <stdio.h>

int     main()
{
        int a;

        printf("Please enter a number araound 1-5: ");
        scanf("%d", &a);

        if(a == 1 || a == 2)
            printf("your number is 1 or 2");
        else
            printf("your numbe is 3 or 4 or 5");
        return (0);
}