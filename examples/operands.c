#include <stdio.h>

int     main()
{
        int x = 0, y = 1;

        /*if(x)
            printf("x dogru sonuc donduruyor");
        else
        printf("x yanlis sonuc donduruyo.");*/
        if(x || y)
            printf("x ve y dogru sonuc donduruyor");
        else
            printf("x ve y yanlis sonuc donduruyo.");
        return (0);
    
}