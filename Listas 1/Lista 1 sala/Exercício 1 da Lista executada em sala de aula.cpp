#include <stdio.h>
#include <conio.h>
#include <float.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	float A, B, C, D;
	printf("Digite a velocidade (Observa��o: N�meros decimais separar com v�rgula):");
	scanf("%f", &A);
	printf("Digite o tempo demorado:");
	scanf("%f", &B);
	C= B*A;
	D= C/12;
	printf("A velocidade: %f; tempo: %f; litros Usados: %f; dist�ncia: %f.", A, B, D, C);
	getch();
	return 0;
}
