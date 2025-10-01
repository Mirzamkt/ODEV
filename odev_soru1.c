#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>


int sayi1;
int sayi2;

int main() {

    printf("Birinci sayiyi girin: ");
    scanf("%d", &sayi1);

    printf("Ikinci sayiyi girin: ");
    scanf("%d", &sayi2);

    printf("Toplam: %d\n", sayi1 + sayi2);

    printf("Fark: %d\n", sayi1 - sayi2);

    printf("Carpim: %d\n", sayi1 * sayi2);

    printf("Bolme: %d\n", sayi1 / sayi2);

    return 0;
}
