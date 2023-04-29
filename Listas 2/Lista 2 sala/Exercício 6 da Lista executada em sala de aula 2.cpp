#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	float a, b, c, d, e, f;
	printf("Digite o valor de a:");
	scanf("%f", &a);
	printf("Digite o valor de b:");
	scanf("%f", &b);
	printf("Digite o valor de c:");
	scanf("%f", &c);
	d= pow(b, 2) - 4*a*c;
	e=((-b)+sqrt(d))/ (2*a);
	f=((-b)-sqrt(d))/ (2*a);
	if (d>0)
	   printf("As raizes são %f e %f.", e, f);
	else
	   printf("Não é uma equação de segundo grau.");
	getch();
	return 0;
}
