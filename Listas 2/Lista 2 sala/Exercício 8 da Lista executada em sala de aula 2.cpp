#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
    int a, b, c, d;
    printf("Digite o primeiro n�mero:");
    scanf ("%d", &a);
    printf("Digite o segundo n�mero:");
    scanf ("%d", &b); 
	printf("Digite o terceiro n�mero:");
    scanf ("%d", &c); 
    if((a %2 == 0 && a %3 == 0) && (b %2 == 0 && b %3 == 0) && (c %2 == 0 && c %3 == 0))
    {
        printf("Todos s�o divis�veis por 2 e 3.");
    }
    else if (a %2 == 0 && a %3 == 0 && b %2 != 0 && b %3 != 0 && c %2 != 0 && c %3 != 0)
    	printf("O primeiro n�mero � divis�vel por 2 e 3.");
    else if (a %2 != 0 && a %3 != 0 && b %2 == 0 && b %3 == 0 && c %2 != 0 && c %3 != 0)
    	printf("O segundo n�mero � divis�vel por 2 e 3.");
    else if (a %2 != 0 && a %3 != 0 && b %2 != 0 && b %3 != 0 && c %2 == 0 && c %3 == 0)
   		printf("O terceiro n�mero � divis�vel por 2 e 3.");
    else if (a %2 == 0 && a %3 == 0 && b %2 == 0 && b %3 == 0 && c %2 != 0 && c %3 != 0)
		printf("O primeiro e o segundo n�mero s�o divis�veis por 2 e 3.");
	else if (a %2 == 0 && a %3 == 0 && b %2 != 0 && b %3 != 0 && c %2 == 0 && c %3 == 0)
		printf("O primeiro e o terceiro n�mero s�o divis�veis por 2 e 3.");
	else if (a %2 != 0 && a %3 != 0 && b %2 == 0 && b %3 == 0 && c %2 == 0 && c %3 == 0)
		printf("O segundo e o terceiro n�mero s�o divis�veis por 2 e 3.");
    getch();
    return 0;
}
