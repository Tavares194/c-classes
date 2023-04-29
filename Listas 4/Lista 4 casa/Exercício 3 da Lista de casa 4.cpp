#include <stdio.h>
#include <conio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int a[9], b[9], c;
	for (c=1; c<=9; c++)
	{
		printf("Digite o %dº número do RA:", c);
		scanf("%d", &a[c]);
		b[c]=a[c];
	}
	b[1]=a[2];
	b[2]=a[1];
	b[8]=a[9];
	b[9]=a[8];
	for (c=1; c<=9; c++)
	printf("\nO %dº número do RA modificado é:%d", c, b[c]);
	getch();
	return 0;
}
