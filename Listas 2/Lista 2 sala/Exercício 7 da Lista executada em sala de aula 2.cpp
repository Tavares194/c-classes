#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	int a;
	printf("Digite um n�mero inteiro:");
	scanf("%d", &a);
	if (a<0)
	   printf("Transforma��o em positivo: %d.", a*-1);
	else if (a>0)
	   printf("Transforma��o em positivo: %d.", a);
	else if (a==0)
	   printf("0 � neutro.");
	getch();
	return 0;
}
