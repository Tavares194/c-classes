#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	float a, b, c;
	printf("Digite o primeiro número:");
	scanf("%f", &a);
	printf("Digite o segundo número:");
	scanf("%f", &b);
	printf("Digite o terceiro número:");
	scanf("%f", &c);
	if (a<b && a<c && b<c)
	   printf("Os números em ordem crescente são, respectivamente: %f, %f, e %f.", a, b, c);
	else if (a<b && a<c && c<b)
	   printf("Os números em ordem crescente são, respectivamente: %f, %f, e %f.", a, c, b);
	else if (b<a && b<c && a<c)
	   printf("Os números em ordem crescente são, respectivamente: %f, %f, e %f.", b, a, c);
	else if (b<a && b<c && c<a)
	   printf("Os números em ordem crescente são, respectivamente: %f, %f, e %f.", b, c, a);
	else if (c<a && c<b && b<a)
	   printf("Os números em ordem crescente são, respectivamente: %f, %f, e %f.", c, b, a);
	else if (c<a && c<b && a<b)
	   printf("Os números em ordem crescente são, respectivamente: %f, %f, e %f.", c, a, b);
	else if (a==b && a<c)
	   printf("O primeiro e o segundo número são iguais %f e o maior número é %f.", a, c);
	else if (a==b && a>c)
	   printf("O menor número é %f, o primeiro e segundo número são iguais %f.", c, a);
	else if (b==c && b<a)
	   printf("O segundo e o terceiro número são iguais %f e o maior número é %f.", b, a);
	else if (b==c && b>a)
	   printf("O menor número é %f, o segundo e terceiro número são iguais %f.", a, b);
	else if (c==a && c<b)
	   printf("O primeiro e o terceiro número são iguais %f e o maior número é %f.", c, b);
	else if (c==a && c>b)
	   printf("O menor número é %f, o primeiro e terceiro número são iguais %f.", b, c);
	else if (a==b && b==c)
	   printf("Todos os números são iguais");
	getch();
	return 0;
}
