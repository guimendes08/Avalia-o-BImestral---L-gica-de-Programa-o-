#include <stdio.h>

int main() {
    int numero;
    int d1, d2, d3, d4, d5;

    printf("Digite um número de 5 dígitos: ");
    scanf("%d", &numero);

    if (numero < 10000 || numero > 99999) {
        printf("Número inválido! Deve ter exatamente 5 dígitos.\n");
    } else {
      
        d1 = numero / 10000;
        d2 = (numero / 1000) % 10;
        d3 = (numero / 100) % 10;
        d4 = (numero / 10) % 10;
        d5 = numero % 10;

        printf("%d   %d   %d   %d   %d\n", d1, d2, d3, d4, d5);
    }

    return 0;
}
