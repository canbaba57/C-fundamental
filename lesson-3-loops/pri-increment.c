#include <stdio.h>

int     main()
{
        int i = 1;

        while(++i <= 10)// ilk önce i yi arttır ardından karşılaştırmayı yap. Bunada pre-incrementation diyorlar.
            printf("%d\n", i);
        return (0);
}