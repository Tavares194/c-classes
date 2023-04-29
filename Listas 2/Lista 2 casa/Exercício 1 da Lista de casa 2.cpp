#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	int NUM, NUMIM;
	printf("Digite o número:");
	scanf("%d", &NUM);
	NUMIM=NUM%2;
	if (NUMIM==0)
	 printf("Este número é par");
	else
	 printf("Este número é ímpar");
	getch();
	return 0;
}
