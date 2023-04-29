#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int a=2;
	while (a<=18)
	{
	printf("\n%d", a);
	a = a+2;
	}
	a=0;
	getch();
	return 0;
}
