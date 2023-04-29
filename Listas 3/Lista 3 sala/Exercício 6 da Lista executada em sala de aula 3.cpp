#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int a, b;
	for (b=15; b<=200; ++b){
	a=pow(b, 2);
	printf("\n%d", a);
	a=0;}
	getch();
	return 0;
}
