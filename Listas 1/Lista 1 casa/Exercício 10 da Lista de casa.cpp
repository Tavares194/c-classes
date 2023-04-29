#include <stdio.h>
#include <conio.h>
#include <float.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	float A, B, C;
	printf("Digite o valor de A (Observação: Números decimais separar com vírgula):");
	scanf("%f", &A);
	printf("Digite o valor de B:");
	scanf("%f", &B);
	C=A;
	A=B;
	B=C;
	printf("O valor de A é %f e o valor de B é %f.", A, B);
	getch();
	return 0;
}
