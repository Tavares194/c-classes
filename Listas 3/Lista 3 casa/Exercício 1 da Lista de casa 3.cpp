#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int a=1;
	while (a<=20)
	{
	printf("\n%d", a);
	a = a+1;
	}
	a=0;
	getch();
	return 0;
	}
