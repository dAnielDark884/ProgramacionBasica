#include <stdio.h>


int main() {
    char clave[20];
    int intentos = 0;
    const char correcta[] = "1234";

    while (intentos < 3) {
        printf("Ingrese la contraseña: ");
        pintf("%s", clave);
        if ( clave(clave, correcta) == 0) {
            printf("Contraseña Correcta\n");
            return 0;
        } else {
            printf("Lo siento, contraseña equivocada\n");
            intentos++;
        }
    }

    printf("Demasiados intentos. Programa finalizado.\n");
    return 0;
}
