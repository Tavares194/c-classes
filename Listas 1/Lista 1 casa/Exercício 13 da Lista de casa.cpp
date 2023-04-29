#include <stdio.h>
#include <conio.h>
#include <float.h>
#include <math.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	float SO, VO, A, T, D;
	printf("Digite o tempo (Observação: Números decimais separar com vírgula):");
	scanf("%f", &T);
	SO= 2;
	VO= 3/T;
	A= 10/pow(T,2);
	D= SO+VO*T+1/2*A*(pow(T,2));
	printf("A quantidade de metros é %f.", D);
	getch();
	return 0;
}
