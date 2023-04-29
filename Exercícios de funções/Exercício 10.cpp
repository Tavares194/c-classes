#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main()
{
	int i;
	setlocale(LC_ALL, "Portuguese");
	const int dias[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	const char *meses[12] = {"Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};
	printf("Digite o número do mês: ");
	scanf("%d", &i);
	printf("\nNome do Mês: %s", meses[i-1]);
	printf("\nNúmeros dos dias: %d", dias[i-1]);
	getch();
	return 0;
}
	
