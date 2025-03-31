#include <stdio.h>

int     main()
{
        //! operator genellikle doğru olan ifadeleri yanlış olarak ayarlar
        //bu operatar genellikle tek değişkenli mantıksal değeri tersine cevirmek için kullanılır. Örneklerle daha iyi anlaşılabilir.

        // if(cevap == 0) cevap  değeri 0 ise durum doğrudur yada bunu kısaltmak için ! operatürünü kullanırız. if(!cevap) cevap yanlış yani 0 ise gibi.

        int cevap;
        
        printf("Cevabiniz nedir ? : ");
        scanf("%d", &cevap);

        if (!cevap)
            printf("cevabiniz yanlis");
        else
            printf("Cevabiniz doğru!!");
        return (0);
}