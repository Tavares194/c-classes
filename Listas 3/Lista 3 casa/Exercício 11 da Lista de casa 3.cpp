#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int a, b, c, d;
	d=0;
	printf("Digite a tabuada que queira saber:");
	scanf("%d", &c);
	a=0;
	for (b=0; b<=10; ++b)
	{
	d=c;
	printf("\n%d x %d = %d", c, b, a);
	a=a+d;
	}
	getch();
	return 0;
	}
