#include <stdio.h>

int     main()
{
        int num, i = 2;

        printf("Please enter a number: ");
        scanf("%d", &num);

        while(i <= num - 1)
        {
            if (num % i == 0)//Bu şart sağlandığı zaman break komutu döngüden cıkmamamıza yardımc oluyor.
            {
                printf("This number is not a prime number.");
                break;
            }
            i++;
        }
    if(i == num)
        printf("This is a prime number.");
}