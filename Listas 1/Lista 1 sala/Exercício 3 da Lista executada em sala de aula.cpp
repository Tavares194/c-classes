#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	float A, B, C, D;
	printf("Digite o valor do raio (Observa��o: N�meros decimais separar com v�rgula):");
	scanf("%f", &A);
	printf("Digite a altura: ");
	scanf("%f", &B);
	#define C 3.14159
	D= C*A*A*B;
	printf("O volume da lata de �leo � %f.", D);
	getch();
	return 0;
}
