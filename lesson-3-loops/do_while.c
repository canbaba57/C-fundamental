#include <stdio.h>

int     main()
{
        int number, i = 2;

        printf("Please enter a number: ");
        scanf("%d", &number);

        do
        {
            if(number % i == 0)
            {
                printf("This number is not a prime number.");
                break;
            }
            i++;
        }while(i <= number - 1);
        if(number == i)
            printf("This is a prime number");
        return (0);
}