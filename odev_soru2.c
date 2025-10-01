#include <stdio.h>
#include <stdlib.h>


int sayi;

int main() {

    printf("Bir sayi girin: ");
    scanf("%d", &sayi);

    if (sayi > 0) {
        printf("Pozitif\n");
    }

    else if (sayi < 0) {
        printf("Negatif\n");
    }

    else {
        printf("Sifir\n");
    }

    return 0;
}
