#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int a, b, c, d, e;
	printf("Digite 5 n�meros inteiros e mostrarei o maior e o menor n�mero:");
	printf("\nPrimeiro n�mero:");
	scanf("%d", &a);
	printf("Segundo n�mero:");
	scanf("%d", &b);
	printf("Terceiro n�mero:");
	scanf("%d", &c);
	printf("Quarto n�mero:");
	scanf("%d", &d);
	printf("Quinto n�mero:");
	scanf("%d", &e);
	if (a>b && a>c && a>d && a>e)
	printf("\nO maior n�mero � %d.", a);
	if (b>a && b>c && b>d && b>e)
	printf("\nO maior n�mero � %d.", b);
	if (c>a && c>b && c>d && c>e)
	printf("\nO maior n�mero � %d.", c);
	if (d>a && d>b && d>c && d>e)
	printf("\nO maior n�mero � %d.", d);
	if (e>a && e>b && e>c && e>d)
	printf("\nO maior n�mero � %d.", e);
	if (a<b && a<c && a<d && a<e)
	printf("\nO menor n�mero � %d.", a);
	if (b<a && b<c && b<d && b<e)
	printf("\nO menor n�mero � %d.", b);
	if (c<a && c<b && c<d && c<e)
	printf("\nO menor n�mero � %d.", c);
	if (d<a && d<b && d<c && d<e)
	printf("\nO menor n�mero � %d.", d);
	if (e<a && e<b && e<c && e<d)
	printf("\nO menor n�mero � %d.", e);
}
