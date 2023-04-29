#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int a=1;
	do 
	{
		printf("\n%d", a);
		a=a+1;
	}
	while (a<=20);
	getch();
	return 0;
}
