#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<float.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	float A, B, C;
	printf("Digite o peso em kg (Observa��o: N�meros decimais separar com v�rgula):");
	scanf("%f", &A);
	printf("Digite a altura:");
	scanf("%f", &B);
	C=A/pow(B, 2);
	printf("O valor do �ndice de massa corporal � %f.", C);
	getch();
	return 0;
}
