#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int a;
	for (a=20; a>=1; a--)
	printf("\n%d", a);
	getch();
	return 0;
}
