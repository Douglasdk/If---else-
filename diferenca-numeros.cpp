#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int dif,res;   
  int num1,num2;
      
  printf("\n Digite o 1o. numero : ");
  scanf("%d", &num1);
  system ("CLS");
  printf("\n Digite o 2o. numero : ");
  scanf("%d",&num2); 
  dif= num1-num2; 
  res= num2-num1;
 
 
   if(num1>num2){ 
   		
   		printf("A a diferenca entre os numeros e : %.2d \n", dif); 
   }
  else{
  		 printf("A a diferenca entre os numeros e : %.2d \n", res); 
  }
  
  system("PAUSE");	
  return 0;
}


