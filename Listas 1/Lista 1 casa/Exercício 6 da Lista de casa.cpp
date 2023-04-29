#include<stdio.h>
#include<conio.h>
#include<float.h>
#include<math.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	float A, B, C, D, PI;
	printf("Digite o valor de raio (Observação: Números decimais separar com vírgula):");
	scanf("%f", &A);
	#define PI 3.14159
	B=PI*pow(A, 2);
	C=2*PI*A;
	printf("O valor da área é %f e o valor da circunferência é %f.", B, C);
	getch();
	return 0;
}
