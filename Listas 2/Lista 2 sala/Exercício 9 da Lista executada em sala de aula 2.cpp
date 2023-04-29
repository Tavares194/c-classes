#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main () || (b%2 && b%3) || (c%2 && c%3) || (d%2 && d%3))
{
	setlocale(LC_ALL, "Portuguese");
	int a, b, c, d, e, f;
	printf("\nColoque os dois números, inteiros, e irei dizer se são divisíveis por 4 ou 5.");
	printf("\n\nPrimeiro número:");
	scanf("%d", &a);
	printf("O segundo número:");
	scanf("%d", &b);
	c=a%4;
	d=a%5;
	e=b%4;
	f=b%5;
	if (c==0 && d==0 && e==0 && f==0)
	   printf("\n%f e %f são divisíveis por 4 e 5.", a, b);
	else if (c==0 && d==0 && e==0 && f==1)
	   printf("\n%f é divisível por 4 e 5, e %f só por 4.", a, b);
	else if (c==0 && d==0 && f==0 && e==1)
	   printf("\n%f é divisível por 4 e 5, e %f só por 5.", a, b);
	else if (e==0 && f==0 && c==0 && d==1)
	   printf("\n%f é divisível por 4 e 5, e %f só por 4.", b, a);
	else if (e==0 && f==0 && d==0 && c==1)
	   printf("\n%f é divisível por 4 e 5, e %f só por 5.", b, a);
	else if (c==0 && d==0 && e==1 && f==1)
	   printf("\nSó %f é divisível por 4 e 5.", a);
	else if (c==1 && d==1 && e==0 && f==0)
	   printf("\nSó %f é divisível por 4 e 5.", b);
	else if (c==0 && d==1 && e==1 && f==1)
	   printf("\nSó %f é divisível por 4.", a);
    else if (c==1 && d==0 && e==1 && f==1)
	   printf("\nSó %f é divisível por 5.", a);
	else if (c==1 && d==1 && e==0 && f==1)
	   printf("\nSó %f é divisível por 4.", b);
	else if (c==1 && d==1 && e==1 && f==0)
	   printf("\nSó %f é divisível por 5.", b);
	else if (c==1 && d==1 && e==1 && f==0)
	   printf("\nNenhum deles são divisíveis por 4 ou 5.");
	getch();
	return 0;
}
