#include <stdio.h>
#include <conio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int a[10], b[10], c, d, e, f;
	for (c=1; c<=10; c++)
	{
		printf("Digite o %dº valor:", c);
		scanf("%d", &a[c]);
	}
	d=10;
	for (c=1; c<=10; c++)
	for (f=1; f<=1; f++)
	{
		b[c]=a[d];
		d--;
	}
	for (c=1; c<=10; c++)
	printf("\nO %dº valor: %d", c, b[c]);
	getch();
	return 0;
}
