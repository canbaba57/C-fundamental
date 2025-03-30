#include <stdio.h>

int     main()
{
    //if 'if' condition does not provide you condition, 'else' execute. example.
    int a = 5;
    
    if (a > 5)
        printf("a bigger than 5");
    else
    {
        a+=5;
        printf("a is not bigger than 5 and we add 5 to a: \nnow a is  %d", a);
    }
    return (0);
}