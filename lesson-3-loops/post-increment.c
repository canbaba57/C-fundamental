#include <stdio.h>

int     main()
{
        int i = 1;

        while(i++ <= 10) //ilk önce karşılaştırmayı yap ardından i' yi 1 arttır. Buna post-incrementation diyorlar.
            printf("%d\n", i);
        return (0);
}