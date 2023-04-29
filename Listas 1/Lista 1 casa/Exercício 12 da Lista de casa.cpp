#include <stdio.h>
#include <conio.h>
#include <float.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	float A, B, C;
	printf("Digite a distância percorrida (Observação: Números decimais separar com vírgula):");
	scanf("%f", &A);
	printf("Digite o tempo gasto:");
	scanf("%f", &B);
	C=A/B;
	printf("A velocidade média foi %f.", C);
	getch();
	return 0;
}
