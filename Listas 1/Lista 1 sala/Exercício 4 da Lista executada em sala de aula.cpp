#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	float A, B;
	printf("Digite o valor de A (Observa��o: N�meros decimais separar com v�rgula):");
	scanf("%f", &A);
	printf("Digite o valor de B:");
	scanf("%f", &B);
	A=A+B;
	B=A-B;
	A=A-B;
	printf("O valor de A � %f e o valor de B � %f.", A, B);
	getch();
	return 0;
}
