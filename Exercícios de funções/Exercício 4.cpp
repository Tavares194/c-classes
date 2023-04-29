#include <stdio.h>
#include <locale.h>
#include <conio.h>

int fib(int c)
{
	int i, fib1 = 1, fib2 = 1, soma;
	for (i=2; i<=c; ++i)
	{
		soma = fib1 + fib2;
		fib1 = fib2;
		fib2 = soma;
	}
	printf("Haverá %d casais de coelhos", fib2);
}
int main()
{
    setlocale(LC_ALL, "Portuguese");
	int n;
	printf("Digite o mês:");
	scanf("%d", &n);
	fib(n);
	getch();
	return 0;
}
