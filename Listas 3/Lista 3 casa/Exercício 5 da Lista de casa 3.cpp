#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int a;
	for (a=1; a<=20; a=a+2)
	printf("\n%d", a);
	getch();
	return 0;
}
