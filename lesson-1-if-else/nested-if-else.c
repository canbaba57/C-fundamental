#include <stdio.h>

int     main()
{
        //in this code if-else is used inside if-else
        int a = 5;

        if(a > 5)
            printf("a is bigger than 5");
        else
        {
            printf("a is not bigger than, we add a to 5\n");
            a+=5;
            if(a > 5)
                printf("Now a is bigger than 5");
            else
                printf("a is still not bigger than 5");
        }
        
        return (0);
}