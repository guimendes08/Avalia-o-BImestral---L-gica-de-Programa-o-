#include <stdio.h>

int main() {
    printf("Numero\tQuadrado\tCubo\n"); 

    for (int n = 0; n <= 10; n++) {
        printf("%d\t%d\t\t%d\n", n, n * n, n * n * n);
    }

    return 0;
}
