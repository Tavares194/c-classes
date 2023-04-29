#include <stdio.h>
#include <conio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int a[5], b[5], c[10], d, e;
	for (d=1; d<=5; d++)
	{
		printf("Digite o %dº numero: ", d);
		scanf("%d", &a[d]);
	}
	for (d=1; d<=5; d++)
	{
		printf("Digite o %dº numero: ", d);
		scanf("%d", &b[d]);
	}
	e=1;
	for (d=1; d<=5; d++)
	{
		c[d]=a[d];
	}
	for (d=6; d<=10; d++)
	{
		c[d]=b[e];
		e++;
	}
	for (d=1; d<=10; d++)
	printf("\n%d", c[d]);
	getch();
	return 0;
}

