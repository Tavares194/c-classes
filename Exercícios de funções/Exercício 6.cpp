#include <stdio.h>
#include <conio.h>
#include <locale.h> 

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int cod;
	printf("Digite o c�digo do curso: ");
	scanf("%d", &cod);
	switch(cod){
	case 1:
		printf("\nEngenharia.\n");
		break;
	case 2:
		printf("\nEdifica��es.\n");
		break;
	case 3:
		printf("\nSistemas.\n");
		break;
		default: printf("\nC�digo inv�lido.\n");
}
	getch;
	return 0;
}
