#include <stdio.h>
#include <conio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int a[9], b[9], c;
	for (c=1; c<=9; c++)
	{
		printf("Digite o %dº número do RAV:", c);
		scanf("%d", &b[c]);
	}
	a[1]=b[1];
	a[2]=b[2];
	a[3]=b[8];
	a[4]=b[7];
	a[5]=b[5];
	a[6]=b[6];
	a[7]=b[3];
	a[8]=b[4];
	a[9]=b[9];
	for (c=1; c<=9; c++)
	printf("\nO %dº número do RAC é:%d", c, a[c]);
	getch();
	return 0;
}
