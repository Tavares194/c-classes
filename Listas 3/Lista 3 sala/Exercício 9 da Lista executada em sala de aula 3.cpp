#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <locale.h>

int main() 
{
	setlocale(LC_ALL, "Portuguese");
	int a, b, pote,cont; 
	printf("Digite a base do cálculo de potência:");
	scanf("%d", &a);
	printf("Digite o expoente do cálculo de potência:");
	scanf("%d", &b);
	pote = 1;
	cont = 0;
	while (cont != b) 
	{
	pote = pote * a;
    cont = cont + 1;
	}
	printf("O valor de %d elevado a %d: %d\n", a, b, pote);
	getch();
	return 0;
}
