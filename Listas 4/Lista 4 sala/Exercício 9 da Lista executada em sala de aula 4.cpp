#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int a, b;
    printf("Digite o código de acesso:");
    scanf("%d", &a);
    switch (a)
	{
	   case 12345 : printf("\n1-Engenharia.\n2-Edificações.\n3-Sistema Elétrico.\n4-Turismos.\n5-Análise de Sistemas."); break;
       default: printf("\nCódigo inválido.");
	}
    getch();
    return 0;
}
