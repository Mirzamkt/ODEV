#include <stdio.h>
#include <stdlib.h>

int sayi;

int main() {

    printf("Bir sayi girin: ");
    scanf("%d", &sayi);

    for (int i = 1; i <= sayi; i++) {
        if (i % 3 == 0) {
            continue;
        }
        if (i > 50) {
            break;
        }
        printf("%d\n", i);
    }

    return 0;
}
