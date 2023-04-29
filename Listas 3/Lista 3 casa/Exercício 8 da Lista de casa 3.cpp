#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int a=2;
	do
	{
		printf("\n%d é par", a);
		a=a+2;
	}
	while (a<=20);
	a=0;
	getch();
	return 0;
}
