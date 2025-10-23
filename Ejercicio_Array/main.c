#include <stdio.h>
#include <stdlib.h>

int main() {
    char nombre1[] = "Daniel,K0VI";
    char nombre2[] = "Daniel,KOVI";
    int i, igual = 1; 

    for (i = 0; nombre1[i] != '\0' || nombre2[i] != '\0'; i++) {
    	
        if (nombre1[i] != nombre2[i]) {
        	
            igual = 0;
            
            break;
        }
    }

    if (igual == 1) {
    	
        printf("Los arrays son iguales.\n");
        
    } else {
    	
        printf("Los arrays no son iguales.\n");
        
    }

    return 0;
}
