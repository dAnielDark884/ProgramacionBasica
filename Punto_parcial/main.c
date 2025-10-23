#include <stdio.h>

int main() {
    int i, j, espacio;
    int filas = 4;

    for (i = 1; i <= filas; i++) {
        for (espacio = i; espacio < filas; espacio++) {
            printf(" ");
        }
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }
    for (i = filas - 1; i >= 1; i--) {
        for (espacio = filas; espacio > i; espacio--) {
            printf(" ");
        }
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
