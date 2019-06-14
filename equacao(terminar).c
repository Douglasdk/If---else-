
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {


float  X1,X2,A,B,C,del,rdel;


	printf("\n Cauculo de uma equação do segundo grau");
	printf("Atribua o valor de A\n");
	scanf("%f",&A);
	printf("Atribua o valor de B\n");
	scanf("%f",&B);
	printf("Atribua o valor de C\n");
	scanf("%f",&C);
	
	del= pow(B,2)-(4*A*C);
	rdel= sqrt(del);
	X1= (-B + rdel)/(2*A);
	X2= (-B - rdel)/(2*A);
	
if(X1>=0||X2>=0){
	
	printf("O valor de X1 e igual a:\n ",X1);
	printf("O valor de X2 e igual a:\n ",X2);
}
else 
	
	printf("Um dos valores e menor que zero");

	return 0;
}

