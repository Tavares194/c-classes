#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	float a, b, c;
	printf("Digite o primeiro n�mero:");
	scanf("%f", &a);
	printf("Digite o segundo n�mero:");
	scanf("%f", &b);
	if (a>b)
	{
	   c=a-b;
	   printf("A diferen�a entre o primeiro e o segundo n�mero � %f", c);
    getch();
    return 0;
	}
    else
	   if (a<b)
	   {
	    c=b-a;
	    printf("A diferen�a entre o primeiro e o segundo n�mero � %f", c);
	   getch();
	   return 0;   
       }
	   else
	    c=a-b;
	    printf("A diferen�a entre o primeiro e o segundo n�mero � %f", c);
	getch();
	return 0;
}
