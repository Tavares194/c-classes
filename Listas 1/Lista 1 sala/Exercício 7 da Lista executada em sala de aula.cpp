#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	float A, B;
	printf("Digite o NR_Coelhos:");
	scanf("%f", &A);
	B= (A*0.70)/18+10;
	printf("O custo será de %f.", B);
	getch();
	return 0;
}
