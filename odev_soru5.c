#include <stdio.h>
#include <stdlib.h>



int not;
float ortalama;

int main() {

    for (int i = 1; i <= 5; i++) {
        int toplam = 0;

        printf("%d. Ogrencinin notlarini girin:\n", i);

        for (int j = 1; j <= 4; j++) {
            printf("%d. not: ", j);
            scanf("%d", &not);

            if (not < 0 || not > 100) {
                printf("Gecersiz not! 0-100 arasinda bir deger girin.\n");
                j--;
                continue;
            }

            toplam += not;
        }

        ortalama = toplam / 4;
        printf("%d. Ogrencinin ortalamasi: %.2f - ", i, ortalama);

        if (ortalama < 50) {
            printf("Kaldi\n");
        }

        else {
            printf("Gecti\n");
        }
    }

    return 0;
}
