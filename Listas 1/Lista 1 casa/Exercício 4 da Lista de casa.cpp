#include<stdio.h>
#include<conio.h>
#include<float.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	float A, B, C, D;
	printf("Digite a largura do ret�ngulo (Observa��o: N�meros decimais separar com v�rgula):");
	scanf("%f", &A);
	printf("Digite a altura do ret�ngulo:");
	scanf("%f", &B);
	C=A*B;
	D=2*A+2*B;
	printf("O valor da �rea � %f e o valor do per�metro � %f.", C, D);
	getch();
	return 0;
}
