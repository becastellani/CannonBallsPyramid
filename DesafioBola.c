#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

int main() {
    int numBolas, totalBolas, i, j;

    printf("Digite o numero de bolas na base da piramide: ");
    scanf("%d", &numBolas);

    totalBolas = (numBolas * (numBolas + 1) * (numBolas + 2)) / 6;


    i = numBolas;

    while (i >= 1) {
        j = 1;

        while (j <= i) {
            printf("* ");
            j++;
        }

        printf("\n");
        i--;
    }
    printf("O numero total de bolas eh %d.\n\n", totalBolas);

    return 0;
}
