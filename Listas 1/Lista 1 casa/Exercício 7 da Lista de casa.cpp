#include<stdio.h>
#include<conio.h>
#include<float.h>
#include<math.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	float A, B, C, PI, E, F;
	printf("Digite o valor de raio (Observação: Números decimais separar com vírgula):");
	scanf("%f", &A);
	#define PI 3.14159
	E=pow(A, 3);
	F=pow(A, 2);
	B=1.3333333*PI*E;
	C=4*PI*F;
	printf("O valor do volume é %f e o valor da área é %f.", B, C);
	getch();
	return 0;
}
