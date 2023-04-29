#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
    int a, b, c, d;
    printf("Digite o primeiro número:");
    scanf ("%d", &a);
    printf("Digite o segundo número:");
    scanf ("%d", &b); 
	printf("Digite o terceiro número:");
    scanf ("%d", &c); 
    if((a %2 == 0 && a %3 == 0) && (b %2 == 0 && b %3 == 0) && (c %2 == 0 && c %3 == 0))
    {
        printf("Todos são divisíveis por 2 e 3.");
    }
    else if (a %2 == 0 && a %3 == 0 && b %2 != 0 && b %3 != 0 && c %2 != 0 && c %3 != 0)
    	printf("O primeiro número é divisível por 2 e 3.");
    else if (a %2 != 0 && a %3 != 0 && b %2 == 0 && b %3 == 0 && c %2 != 0 && c %3 != 0)
    	printf("O segundo número é divisível por 2 e 3.");
    else if (a %2 != 0 && a %3 != 0 && b %2 != 0 && b %3 != 0 && c %2 == 0 && c %3 == 0)
   		printf("O terceiro número é divisível por 2 e 3.");
    else if (a %2 == 0 && a %3 == 0 && b %2 == 0 && b %3 == 0 && c %2 != 0 && c %3 != 0)
		printf("O primeiro e o segundo número são divisíveis por 2 e 3.");
	else if (a %2 == 0 && a %3 == 0 && b %2 != 0 && b %3 != 0 && c %2 == 0 && c %3 == 0)
		printf("O primeiro e o terceiro número são divisíveis por 2 e 3.");
	else if (a %2 != 0 && a %3 != 0 && b %2 == 0 && b %3 == 0 && c %2 == 0 && c %3 == 0)
		printf("O segundo e o terceiro número são divisíveis por 2 e 3.");
    getch();
    return 0;
}
