#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
 {
	
	int sexo;
	float alt, masc, fem;
	
	printf("\n Cauculo de peso ideal");
	printf("\n Digite 1 se voce for do sexo masculino ou 2 se for do feminino");
	scanf("%c",&sexo);
	printf("\n Digite a sua altura em casas decimais");
	scanf("%f",&alt);
	
	if(sexo==1)
	{
		masc=(72.7*alt)-58;
		printf("O peso ideal para voce e %.2f",masc);
		
	}
	
	else		
	{
		fem=(62.1*alt)-44.7;
		printf("O peso ideal para voce e %.2f",fem);
		
	}
	 
	 
	return 0;
}
