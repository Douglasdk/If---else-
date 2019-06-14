#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float num1,num2;
      
		  printf("\n Digite o 1o. numero : ");
		  scanf("%f", &num1);
		  system ("CLS");
		  printf("\n Digite o 2o. numero : ");
		  scanf("%f",&num2); 
		
		if(num1>num2){
			printf("a ordem dos numeros por maior ou menor e %.2f %.2f \n",num1,num2);
		}
			
					
		else{
			printf("a ordem dos numeros por maior ou menor e %.2f %.2f \n",num2,num1);
		}
		
		
	
	
	return 0;
}
