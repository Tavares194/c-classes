#include<stdio.h>
#include<conio.h>
#include<float.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	float A, B, C, D, ME;
	printf("Digite a primeira nota do bimestre (Observa��o: N�meros decimais separar com v�rgula):");
	scanf("%f", &A);
	printf("Digite a segunda nota do bimestre::");
	scanf("%f", &B);
	printf("Digite a terceira nota do bimestre::");
	scanf("%f", &C);
	printf("Digite a �ltima nota do bimestre::");
	scanf("%f", &D);
	ME=(A+B+C+D)/4;
	printf("Sua m�dia � %f.", ME);
	getch();
	return 0;
}
