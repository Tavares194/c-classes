#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int a;
	for (a=0;a<=20; a++)
	if (a%2==1)
	printf("\n%d é número ímpar.", a);
	getch();
	return 0;
}
