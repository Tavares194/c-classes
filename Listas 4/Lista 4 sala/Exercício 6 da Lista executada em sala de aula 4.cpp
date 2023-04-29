#include <stdio.h>
#include <conio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int a[8], b[8], c, d;
	for (c=1; c<=8; c++)
	{
		printf("Digite o %dº valor:", c);
		scanf("%d", &a[c]);
	}
	for (c=1; c<=8; c++)
	{
		d=a[c]*a[c];
		b[c]=d;
	}
	for (c=1; c<=8; c++)
	printf("\nO %dº valor ao quadrado é: %d", c, b[c]);
	getch();
	return 0;
}
