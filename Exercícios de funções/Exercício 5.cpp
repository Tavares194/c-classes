#include <stdio.h>
#include <conio.h>
#include <locale.h>

int fatorial(int b)
{
	int fat=1, i;
	for (i=1; i<=b; ++i)
	fat=fat*i;
	printf("Seu fatorial � %d", fat);
}

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int a;
	printf("Digite um n�mero:");
	scanf("%d", &a);
	fatorial(a);
	getch();
	return 0;
}

