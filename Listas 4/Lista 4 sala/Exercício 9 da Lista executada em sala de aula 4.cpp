#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int a, b;
    printf("Digite o c�digo de acesso:");
    scanf("%d", &a);
    switch (a)
	{
	   case 12345 : printf("\n1-Engenharia.\n2-Edifica��es.\n3-Sistema El�trico.\n4-Turismos.\n5-An�lise de Sistemas."); break;
       default: printf("\nC�digo inv�lido.");
	}
    getch();
    return 0;
}
