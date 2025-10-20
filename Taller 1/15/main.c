#include <stdio.h>

int main() {
    int n, i, esPrimo = 1;
    printf("Ingrese un número: ");
    scanf("%d", &n);

    if (n <= 1)
        esPrimo = 0;
    else {
        for (i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                esPrimo = 0;
                break;
            }
        }
    }

    if (esPrimo)
        printf("%d es un número primo.\n", n);
    else
        printf("%d no es un número primo.\n", n);

    return 0;
}
