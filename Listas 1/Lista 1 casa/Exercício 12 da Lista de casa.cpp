#include <stdio.h>
#include <conio.h>
#include <float.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	float A, B, C;
	printf("Digite a dist�ncia percorrida (Observa��o: N�meros decimais separar com v�rgula):");
	scanf("%f", &A);
	printf("Digite o tempo gasto:");
	scanf("%f", &B);
	C=A/B;
	printf("A velocidade m�dia foi %f.", C);
	getch();
	return 0;
}
