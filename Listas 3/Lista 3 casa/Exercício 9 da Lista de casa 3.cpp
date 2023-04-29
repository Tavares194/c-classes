#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int a=1;
	do{
		printf("\n%d é ímpar", a);
		a=a+1;
		printf("\n%d é par", a);
		a=a+1;}
	while (a<=20);
	getch();
	return 0;
}
