#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<float.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	float A, B, C;
	printf("Digite o peso em kg (Observação: Números decimais separar com vírgula):");
	scanf("%f", &A);
	printf("Digite a altura:");
	scanf("%f", &B);
	C=A/pow(B, 2);
	printf("O valor do índice de massa corporal é %f.", C);
	getch();
	return 0;
}
