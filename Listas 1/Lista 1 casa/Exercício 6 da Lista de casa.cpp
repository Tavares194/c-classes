#include<stdio.h>
#include<conio.h>
#include<float.h>
#include<math.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	float A, B, C, D, PI;
	printf("Digite o valor de raio (Observa��o: N�meros decimais separar com v�rgula):");
	scanf("%f", &A);
	#define PI 3.14159
	B=PI*pow(A, 2);
	C=2*PI*A;
	printf("O valor da �rea � %f e o valor da circunfer�ncia � %f.", B, C);
	getch();
	return 0;
}
