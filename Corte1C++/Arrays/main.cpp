#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int myNumb[]={10,25,50,75,100};/*acceder a un elemento de una matriz, consulte su número de índice*/
	cout<<myNumb[0]<<endl;

	int myNum[]={25,50,75,100};/*cambiar el valor de un elemento específico*/
	myNum[0]=33;
	cout<<myNum[0]<<endl;
	
	int myNu[4]; /*especificar el tamaño de la matriz y agregar elementos más tarde*/
	myNu[0]=1;
	myNu[1]=2;
	myNu[2]=3;
	myNu[3]=4;
	
	int myNumbers[]={10,25,50,70,100};
	cout<<sizeof(myNumbers)<<endl;/*porque 20,porque cada espacio lo cuenta como 4 bytes*/
	
	int myNumber[]={10,25,50,70,100};
	int lenght = sizeof(myNumber) / sizeof(myNumber[0]);/* cuántos elementos tiene una matriz,*/
	cout<< lenght<<endl;
	
	return 0;
}
