#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  float soma;   
  float num1,num2;
      
  printf("\n Digite o 1o. numero : ");
  scanf("%f", &num1);
  system ("CLS");
  printf("\n Digite o 2o. numero : ");
  scanf("%f",&num2); 
 
   soma = num1 + num2;
  
   printf("\nA soma e : %f \n", soma); 
  
  system("PAUSE");	
  
  if(soma>25)
  		printf("A soma dos numeros e maior que 25")
  return 0;
}
