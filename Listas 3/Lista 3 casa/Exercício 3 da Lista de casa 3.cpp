#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int a=1;
	while (a<=20)
	{
	printf("\n%d É um número ímpar", a);
	a=a+1;
	printf("\n%d É um número par", a);
	a=a+1;
	}
	getch();
	return 0;
}
