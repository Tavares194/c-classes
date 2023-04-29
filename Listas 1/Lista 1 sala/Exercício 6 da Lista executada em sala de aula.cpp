#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	float A, B, C, D;
	printf("Vou calcular a prestação em atraso, digite o valor:");
	scanf("%f", &A);
	printf("Digite a Taxa:");
	scanf("%f", &B);
	printf("Digite o Tempo em meses:");
	scanf("%f", &C);
	D= A+(A*(B/100)*C);
	printf("O valor da prestação é de %f.", D);
	getch();
	return 0;
}
