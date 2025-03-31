#include <stdio.h>

int     main()
{
        int x, y;

        printf("1 Sayi girisi yapiniz: ");
        scanf("%d", &x);

        y = (x > 5 ? 3:4);//x eğer 5 den büyükse 3, y 3 olsun, diğer türlü değilse yani 4 olsun y.
        
        printf("%d",y);
        return (0);
}