#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	float a, b, c;
	printf("Digite o primeiro número:");
	scanf("%f", &a);
	printf("Digite o segundo número:");
	scanf("%f", &b);
	if (a>b)
	{
	   c=a-b;
	   printf("A diferença entre o primeiro e o segundo número é %f", c);
    getch();
    return 0;
	}
    else
	   if (a<b)
	   {
	    c=b-a;
	    printf("A diferença entre o primeiro e o segundo número é %f", c);
	   getch();
	   return 0;   
       }
	   else
	    c=a-b;
	    printf("A diferença entre o primeiro e o segundo número é %f", c);
	getch();
	return 0;
}
