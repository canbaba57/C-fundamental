#include <stdio.h>

int     main()
{
        int count = 10;
        for (int i = 0; ++i < count;) //İlk başta i değişkenini tanımlıyoruz ardından karşılaştırma yapıyoruz koşul sağlanırsa döngünün içindeki kod çalışır. Sonra for 
        {//döngüsünün içindeki i++ komutu yani i 'yi 1 artırır. Sonra tekrardan kondisyonu kontrol eder i < count mu diye.
            /* code */
            printf("%d\n", i);
        }
        //Önemli not: for döngüsünün içindeki her tanımlama sonrası ; koyulur kesin kural. Mesela int i = 0 yazmak istemezseniz onu dışarda tanımlarsınız ama yinede
        // ; konması lazım başa !!!!!!!!!!!!!!!!
        
}