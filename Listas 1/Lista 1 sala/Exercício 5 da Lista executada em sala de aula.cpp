#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int A, B;
	printf("Digite um n�mero inteiro para sabermos o quadrado dele:");
	scanf("%d", &A);
	B=pow(A,2);
	printf("O n�mero ao quadrado � %d.", B);
	getch();
	return 0;
}
