#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	float a, b, c;
	printf("Digite o primeiro n�mero:");
	scanf("%f", &a);
	printf("Digite o segundo n�mero:");
	scanf("%f", &b);
	printf("Digite o terceiro n�mero:");
	scanf("%f", &c);
	if (a<b && a<c && b<c)
	   printf("Os n�meros em ordem crescente s�o, respectivamente: %f, %f, e %f.", a, b, c);
	else if (a<b && a<c && c<b)
	   printf("Os n�meros em ordem crescente s�o, respectivamente: %f, %f, e %f.", a, c, b);
	else if (b<a && b<c && a<c)
	   printf("Os n�meros em ordem crescente s�o, respectivamente: %f, %f, e %f.", b, a, c);
	else if (b<a && b<c && c<a)
	   printf("Os n�meros em ordem crescente s�o, respectivamente: %f, %f, e %f.", b, c, a);
	else if (c<a && c<b && b<a)
	   printf("Os n�meros em ordem crescente s�o, respectivamente: %f, %f, e %f.", c, b, a);
	else if (c<a && c<b && a<b)
	   printf("Os n�meros em ordem crescente s�o, respectivamente: %f, %f, e %f.", c, a, b);
	else if (a==b && a<c)
	   printf("O primeiro e o segundo n�mero s�o iguais %f e o maior n�mero � %f.", a, c);
	else if (a==b && a>c)
	   printf("O menor n�mero � %f, o primeiro e segundo n�mero s�o iguais %f.", c, a);
	else if (b==c && b<a)
	   printf("O segundo e o terceiro n�mero s�o iguais %f e o maior n�mero � %f.", b, a);
	else if (b==c && b>a)
	   printf("O menor n�mero � %f, o segundo e terceiro n�mero s�o iguais %f.", a, b);
	else if (c==a && c<b)
	   printf("O primeiro e o terceiro n�mero s�o iguais %f e o maior n�mero � %f.", c, b);
	else if (c==a && c>b)
	   printf("O menor n�mero � %f, o primeiro e terceiro n�mero s�o iguais %f.", b, c);
	else if (a==b && b==c)
	   printf("Todos os n�meros s�o iguais");
	getch();
	return 0;
}
