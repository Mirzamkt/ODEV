#include <stdio.h>
#include <stdlib.h>

char harf;

int main() {

    printf("Bir harf girin: ");
    scanf(" %c", &harf);

    if (harf == 'a' || harf == 'e' || harf == '�' || harf == 'i' || harf == 'o' || harf == '�' || harf == 'u' || harf == '�') {
        printf("Sesli harf\n");
    }

    else {
        printf("Sessiz harf\n");
    }

    return 0;
}
