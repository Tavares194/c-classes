#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	float A, B;
	printf("Transformação de Graus Fahrenheit para Graus Celsius.\n");
	printf("Digite os Fahrenheit (Observação: Números decimais separar com vírgula):");
	scanf("%f", &A);
	B= (((A-32)*5)/9);
	printf("%f Fahrenheit são %f Graus Celsius.", A, B);
	getch();
	return 0;
}
