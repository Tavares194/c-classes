#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	float a, b, c, d;
	printf("Digite a primeira nota:");
	scanf("%f", &a);
	printf("Digite a segunda nota:");
	scanf("%f", &b);
	printf("Digite a terceira nota:");
	scanf("%f", &c);
	d= (a+b+c)/3;
	if (d >= 6.0)
	    printf("Aluno aprovado com %f de média.", d);
	else
	    printf("Aluno reprovado com %f de média.", d);
	getch();
	return 0;
}
