#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main () || (b%2 && b%3) || (c%2 && c%3) || (d%2 && d%3))
{
	setlocale(LC_ALL, "Portuguese");
	int a, b, c, d, e, f;
	printf("\nColoque os dois n�meros, inteiros, e irei dizer se s�o divis�veis por 4 ou 5.");
	printf("\n\nPrimeiro n�mero:");
	scanf("%d", &a);
	printf("O segundo n�mero:");
	scanf("%d", &b);
	c=a%4;
	d=a%5;
	e=b%4;
	f=b%5;
	if (c==0 && d==0 && e==0 && f==0)
	   printf("\n%f e %f s�o divis�veis por 4 e 5.", a, b);
	else if (c==0 && d==0 && e==0 && f==1)
	   printf("\n%f � divis�vel por 4 e 5, e %f s� por 4.", a, b);
	else if (c==0 && d==0 && f==0 && e==1)
	   printf("\n%f � divis�vel por 4 e 5, e %f s� por 5.", a, b);
	else if (e==0 && f==0 && c==0 && d==1)
	   printf("\n%f � divis�vel por 4 e 5, e %f s� por 4.", b, a);
	else if (e==0 && f==0 && d==0 && c==1)
	   printf("\n%f � divis�vel por 4 e 5, e %f s� por 5.", b, a);
	else if (c==0 && d==0 && e==1 && f==1)
	   printf("\nS� %f � divis�vel por 4 e 5.", a);
	else if (c==1 && d==1 && e==0 && f==0)
	   printf("\nS� %f � divis�vel por 4 e 5.", b);
	else if (c==0 && d==1 && e==1 && f==1)
	   printf("\nS� %f � divis�vel por 4.", a);
    else if (c==1 && d==0 && e==1 && f==1)
	   printf("\nS� %f � divis�vel por 5.", a);
	else if (c==1 && d==1 && e==0 && f==1)
	   printf("\nS� %f � divis�vel por 4.", b);
	else if (c==1 && d==1 && e==1 && f==0)
	   printf("\nS� %f � divis�vel por 5.", b);
	else if (c==1 && d==1 && e==1 && f==0)
	   printf("\nNenhum deles s�o divis�veis por 4 ou 5.");
	getch();
	return 0;
}
