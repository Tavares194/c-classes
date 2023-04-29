#include <stdio.h>
#include <conio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	long int a[6], b[6], c, d, fat;
	fat=1;
	for (c=1; c<=6; c++)
	{
		printf("Digite o %dº número:", c);
		scanf("%d", &a[c]);
        d= a[c];
		b[c]= d;
	}
	for (c=1; c<=6; c++)
	{
	for (d=1; d<a[c]; d++)
	{
		b[c]=b[c]*d;}
	}
	for (c=1; c<=6; c++)
	printf("\nO valor final do %dº número é:%d", c, b[c]);
	getch();
	return 0;
}
