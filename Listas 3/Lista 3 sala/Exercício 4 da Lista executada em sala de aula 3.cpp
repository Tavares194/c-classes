#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	float a, b;
	printf("Digite um número: ");
	scanf("%f", &a);
	if (a > 50)
	printf("Esse número é maior que 50");
	if (a <= 50){
	do{
	printf("\n%.2f.", a);
	a = a*3;}
	while (a <= 250);
	}
	getch();
	return 0;
}
