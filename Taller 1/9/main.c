#include <stdio.h>

int main() {
    int dia, mes;
    printf("Ingrese su dia de nacimiento: ");
    scanf("%d", &dia);
    printf("Ingrese su mes de nacimiento (1-12): ");
    scanf("%d", &mes);

    printf("Su signo zodiacal es: ");
    if ((mes == 3 && dia >= 21) || (mes == 4 && dia <= 19))
        printf("Aries\n");
    else if ((mes == 4 && dia >= 20) || (mes == 5 && dia <= 20))
        printf("Tauro\n");
    else if ((mes == 5 && dia >= 21) || (mes == 6 && dia <= 20))
        printf("Géminis\n");
    else if ((mes == 6 && dia >= 21) || (mes == 7 && dia <= 22))
        printf("Cáncer\n");
    else if ((mes == 7 && dia >= 23) || (mes == 8 && dia <= 22))
        printf("Leo\n");
    else if ((mes == 8 && dia >= 23) || (mes == 9 && dia <= 22))
        printf("Virgo\n");
    else if ((mes == 9 && dia >= 23) || (mes == 10 && dia <= 22))
        printf("Libra\n");
    else if ((mes == 10 && dia >= 23) || (mes == 11 && dia <= 21))
        printf("Escorpio\n");
    else if ((mes == 11 && dia >= 22) || (mes == 12 && dia <= 21))
        printf("Sagitario\n");
    else if ((mes == 12 && dia >= 22) || (mes == 1 && dia <= 19))
        printf("Capricornio\n");
    else if ((mes == 1 && dia >= 20) || (mes == 2 && dia <= 18))
        printf("Acuario\n");
    else if ((mes == 2 && dia >= 19) || (mes == 3 && dia <= 20))
        printf("Piscis\n");
    else
        printf("Fecha no válida\n");

    return 0;
}
