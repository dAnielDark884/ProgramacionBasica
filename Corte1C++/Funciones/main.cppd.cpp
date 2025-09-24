#include <iostream>

/* run this program using the counsole pauser or add your own getch, system("pause") or input loop */
using namespace std;
int sumar (int a,int b){
	int r= a+b;
	return r;
}
	int resta (int x,int y){
		int c=x-y;
		return c;
	}
	int multipli(int z,int m){
		int s=z*m;
		return s;
	}

int main(int argc, char** argv) {
	int h =sumar(3,2);
	cout<<h<<endl;
	
	int f =resta(4,5);
	cout<<f<<endl;
	
	int k =multipli(8,7);
	cout<<k<<endl;


		return 0;
		/*hacer resta y multiplicacion,subir a una carpeta en github llamdda funciones*/
		
}
