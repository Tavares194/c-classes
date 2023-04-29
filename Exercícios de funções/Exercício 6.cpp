#include <stdio.h>
#include <conio.h>
#include <locale.h> 

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int cod;
	printf("Digite o código do curso: ");
	scanf("%d", &cod);
	switch(cod){
	case 1:
		printf("\nEngenharia.\n");
		break;
	case 2:
		printf("\nEdificações.\n");
		break;
	case 3:
		printf("\nSistemas.\n");
		break;
		default: printf("\nCódigo inválido.\n");
}
	getch;
	return 0;
}
