#include<stdio.h>
#include<conio.h>
#include<float.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	float A, B, C, D;
	printf("Digite a nota da primeira prova (Observa��o: N�meros decimais separar com v�rgula):");
	scanf("%f", &A);
	printf("Digite a nota da segunda prova:");
	scanf("%f", &B);
	printf("Digite a nota da sua atividade:");
	scanf("%f", &C);
	D=((A*4)+(B*4)+(C*2))/10;
	printf("A sua m�dia � %f.", D);
	getch();
	return 0;
}
