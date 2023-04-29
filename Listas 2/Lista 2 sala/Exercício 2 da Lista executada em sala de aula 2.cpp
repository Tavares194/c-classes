#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	float a, b, c, d, e;
	printf("Digite a primeira nota:");
	scanf("%f", &a);
	printf("Digite a segunda nota:");
	scanf("%f", &b);
	c=(a+b)/2;
	if (c>= 6.0)
	{
	printf("Aluno aprovado com %f de média", c);
	getch();
	return 0;   
	}
	else
	printf("Digite a nota do exame:");
	scanf("%f", &d);
	e=(c+d)/2;
	   if (e>= 5.0)
	      printf("Aluno aprovado com %f de média", e);
	    else
	      printf("Aluno reprovado com %f de média", e);
	getch();
	return 0;
}
