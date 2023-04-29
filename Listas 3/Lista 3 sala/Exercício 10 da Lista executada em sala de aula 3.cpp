#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int a, b;
	a=2;
	b=0;
	while (a <= 500){
		b=b+a;
		a=a+2;}
	printf("Soma dos valores pares existentes de 1 até 500: %d", b);
	getch();
	return 0;
}
