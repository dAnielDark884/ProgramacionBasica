#include <stdio.h>

int main() {
    float num, suma = 0;
    int contador = 0;

    printf("Ingrese números positivos (un número negativo para terminar):\n");
    while (1) {
        scanf("%f", &num);
        if (num < 0)
            break;
        suma += num;
        contador++;
    }

    if (contador > 0)
        printf("Promedio = %.2f\n", suma / contador);
    else
        printf("No se ingresaron números positivos.\n");

    return 0;
}
