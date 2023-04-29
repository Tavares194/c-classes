#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int a, b;
	a=0;
	b=0;
	while (b<=15){
	a=pow(3, b);
	printf("\n3 Elevado a %d = %d", b, a);
	b=b+1;}
	getch();
	return 0;
}
