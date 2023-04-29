#include<stdio.h>
#include<conio.h>
#include<float.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	float A, B, C, D, ME;
	printf("Digite a primeira nota do bimestre (Observação: Números decimais separar com vírgula):");
	scanf("%f", &A);
	printf("Digite a segunda nota do bimestre::");
	scanf("%f", &B);
	printf("Digite a terceira nota do bimestre::");
	scanf("%f", &C);
	printf("Digite a última nota do bimestre::");
	scanf("%f", &D);
	ME=(A+B+C+D)/4;
	printf("Sua média é %f.", ME);
	getch();
	return 0;
}
