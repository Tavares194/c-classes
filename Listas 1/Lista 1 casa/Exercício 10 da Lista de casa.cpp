#include <stdio.h>
#include <conio.h>
#include <float.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	float A, B, C;
	printf("Digite o valor de A (Observa��o: N�meros decimais separar com v�rgula):");
	scanf("%f", &A);
	printf("Digite o valor de B:");
	scanf("%f", &B);
	C=A;
	A=B;
	B=C;
	printf("O valor de A � %f e o valor de B � %f.", A, B);
	getch();
	return 0;
}
