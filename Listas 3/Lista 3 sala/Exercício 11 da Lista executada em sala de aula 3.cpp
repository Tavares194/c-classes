#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int a, b, c, d, e;
	printf("Digite 5 números inteiros e mostrarei o maior e o menor número:");
	printf("\nPrimeiro número:");
	scanf("%d", &a);
	printf("Segundo número:");
	scanf("%d", &b);
	printf("Terceiro número:");
	scanf("%d", &c);
	printf("Quarto número:");
	scanf("%d", &d);
	printf("Quinto número:");
	scanf("%d", &e);
	if (a>b && a>c && a>d && a>e)
	printf("\nO maior número é %d.", a);
	if (b>a && b>c && b>d && b>e)
	printf("\nO maior número é %d.", b);
	if (c>a && c>b && c>d && c>e)
	printf("\nO maior número é %d.", c);
	if (d>a && d>b && d>c && d>e)
	printf("\nO maior número é %d.", d);
	if (e>a && e>b && e>c && e>d)
	printf("\nO maior número é %d.", e);
	if (a<b && a<c && a<d && a<e)
	printf("\nO menor número é %d.", a);
	if (b<a && b<c && b<d && b<e)
	printf("\nO menor número é %d.", b);
	if (c<a && c<b && c<d && c<e)
	printf("\nO menor número é %d.", c);
	if (d<a && d<b && d<c && d<e)
	printf("\nO menor número é %d.", d);
	if (e<a && e<b && e<c && e<d)
	printf("\nO menor número é %d.", e);
}
