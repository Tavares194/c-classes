#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	int a, b, c, d, e;
	printf("Digite a primeira medida:");
	scanf("%d", &a);
	printf("Digite a segunda medida:");
	scanf("%d", &b);
	printf("Digite a terceira medida:");
	scanf("%d", &c);
	if (a<b+c && b<a+c && c<b+a && a!=b && b!=c && a!=c)
	printf("Este triangulo é escaleno.");
	else if (a<b+c && b<a+c && c<b+a && a==b && b==c)
    printf("Este triangulo é equilátero.");
    else if ((a<b+c && b<a+c && (c<b+a) && a==b && c!=a) || (a<b+c && b<a+c && (c<b+a) && b==c && a!=c) || (a<b+c && b<a+c && (c<b+a) && a==c && c!=b))
    printf("Esse triangulo é isósceles.");
       else if (a>=b+c || (b>=a+c) || c>=a+b)
    printf("Medidas inválidas");
	getch();
	return 0;
}
