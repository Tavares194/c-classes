#include<stdio.h>
#include<conio.h>
#include<float.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	float D, A;
	printf("Digite o valor em d�lares (Observa��o: N�meros decimais separar com v�rgula):");
	scanf("%f", &A);
	D=A*2.40;
	printf("O valor da convers�o c�mbial de d�lares em reais: %f.", D);
	getch();
	return 0;
}
