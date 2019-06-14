#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	char nome[7];
	float b1,b2,b3,b4,media;
	
	printf("\n Cauculo da media final"); 
	printf("\n Digite o nome do aluno ");
	scanf("%s",&nome);
	printf("\n Digite a primeira nota ");
	scanf("%f",&b1);
	printf("\n Digite a segunda nota ");
	scanf("%f",&b2);
	printf("\n Digite a terceira nota ");
	scanf("%f",&b3);
	printf("\n Digite a quarta nota ");
	scanf("%f",&b4);
	media=(b1+b2+b3+b4)/4;
	printf("\n a media do aluno: %s \n", nome);
	printf("e: %f", media);
	
	if(media>=7){
		printf("aluno alcancou a media: %.2f\n",media);
		printf("aprovado");		
	}
	 
	else{	
		printf("aluno nao alcancou a media: %.2f\n",media);
		printf("reprovado");
	}
	
	return 0;
}
