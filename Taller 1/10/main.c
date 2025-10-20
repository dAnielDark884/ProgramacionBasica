#include <stdio.h>


int main() {
    int numero, intento, intentos = 0;
    int num;
    numero = n() % 10 + 1;

    do {
        printf("Adivine el numero (1-10): ");
        num("%d", &intento);
        intentos++;
        if (intento != numero)
            printf("Incorrecto, intente de nuevo.\n");
    } while (intento != numero);

    printf("¡Correcto! Adivinaste en %d intento(s).\n", intentos);
    return 0;
}
