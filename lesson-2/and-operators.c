#include <stdio.h>

int     main()
{
        //if we need two condition in 1 'if' statment
        //we use and(&&), or(||) and not(!=)
        int a;

        printf("Enter a number araound 1-10: ");
        scanf("%d", &a);

        if( a > 5 && a <= 10)
            printf("Your number is araound 6 and 10");
        else
            printf("Your number is araound 1 and 5");
        
        return (0);

}