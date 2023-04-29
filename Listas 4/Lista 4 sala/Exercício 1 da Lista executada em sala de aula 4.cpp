#include <stdio.h>
#include <conio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int a[5], b[5], c, d;
	for (c=1; c<=5; c++)
	{
	printf("Digite o %dº valor:", c);
	scanf("%d", &a[c]);
	}
	for (c=1; c<=5; c++)
	{
	a[c]=a[c]*3;
	d= a[c];
	b[c]=d;
	}
	for (c=1; c<=5; c++)
	printf("\nO %dº valor é:%d", c, b[c]);
}

