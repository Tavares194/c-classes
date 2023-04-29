#include<stdio.h>
#include<conio.h>
#include<float.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	float A, B, C, D, E, F, G;
	printf("Digite a altura da parede (Observação: Números decimais separar com vírgula):");
	scanf("%f", &A);
	printf("Digite a largura da parede:");
	scanf("%f", &B);
	C=A*B;
	printf("Digite a altura do azulejo:");
	scanf("%f", &D);
	printf("Digite a largura do azulejo:");
	scanf("%f", &E);
	F=D*E;
	G=C/F;
	printf("Terá como colocar %f azulejos na parede.", G);
	getch();
	return 0;
}
