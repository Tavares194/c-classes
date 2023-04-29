#include<stdio.h>
#include<conio.h>
#include<float.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	float A, B, C, D;
	printf("Digite a largura do retângulo (Observação: Números decimais separar com vírgula):");
	scanf("%f", &A);
	printf("Digite a altura do retângulo:");
	scanf("%f", &B);
	C=A*B;
	D=2*A+2*B;
	printf("O valor da área é %f e o valor do perímetro é %f.", C, D);
	getch();
	return 0;
}
