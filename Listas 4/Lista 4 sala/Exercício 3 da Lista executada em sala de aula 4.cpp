#include <stdio.h>
#include <conio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int a[5], b[5], c[5], d;
	for (d=1; d<=5; d++)
	{
		printf("Digite o %d� n�mero da primeira sequ�ncia:", d);
		scanf("%d", &a[d]);
	}
	for (d=1; d<=5; d++)
	{
		printf("Digite o %d� n�mero da segunda sequ�ncia:", d);
		scanf("%d", &b[d]);
	}
	for (d=1; d<=5; d++)
	{
		c[d]=a[d]-b[d];
	}
	for (d=1; d<=5; d++)
	printf("\nO %d� resultado �:%d", d, c[d]);
	getch();
	return 0;
}
