#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	float A, B;
	printf("Transforma��o de Graus Fahrenheit para Graus Celsius.\n");
	printf("Digite os Fahrenheit (Observa��o: N�meros decimais separar com v�rgula):");
	scanf("%f", &A);
	B= (((A-32)*5)/9);
	printf("%f Fahrenheit s�o %f Graus Celsius.", A, B);
	getch();
	return 0;
}
