#include<stdio.h>
#include<conio.h>
#include<float.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	float D, A;
	printf("Digite o valor em reais (Observação: Números decimais separar com vírgula):");
	scanf("%f", &A);
	D=A/2.40;
	printf("O valor da conversão câmbial de reais em dólares: %f.", D);
	getch();
	return 0;
}
