#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	int NUM, NUMIM;
	printf("Digite o n�mero:");
	scanf("%d", &NUM);
	NUMIM=NUM%2;
	if (NUMIM==0)
	 printf("Este n�mero � par");
	else
	 printf("Este n�mero � �mpar");
	getch();
	return 0;
}
