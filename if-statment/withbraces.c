#include <stdio.h>

int     main()
{
        int b = 5;

        if (b > 4)//if you have more than 1 lines, you need braces to execute code.
        {
            printf("b is %d\n", b);
            b++;
            printf("now b is %d", b);
        }
}
