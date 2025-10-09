#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int myNumbers[]={25, 50, 70, 100};
	int i;
	for(i=0;i<4;i++)
	printf("%d\n",myNumbers[i]);
	
	printf("Siguiente Ejemplo Array\n");
	int myNumb[]={25,50,75,100};
	int length=sizeof(myNumb)/sizeof(myNumb[0]);
	int c;
	
	for(c=0;c<length;c++){
		printf("%d\n",myNumb[c]);
	}
	
	return 0;
	
	
	
}
