#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	   
  int num;
      
  printf("\n Digite um numero inteiro : ");
  scanf("%d", &num);
  
  if(num%2==0)//operador %
  
  		printf("Par");
  	
  	else
	
	  	printf("Impar");

 
	return 0;
}
