#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float v1, v2, a, b;
	char cont, si;
	v1=0;
	v2=0;
	cont='A';
	while (cont != 'S'){
		printf("\nCalculadora.\n\nDigite '+' caso queira fazer uma soma.\nDigite '-' caso queira fazer uma subtra��o.\nDigite '/' caso queira fazer uma divis�o.\nDigite '*' caso queira fazer uma multiplica��o.\n\nDigite:");
		scanf("%c", &si);
			if (si=='+'){
				printf("\nDigite o primeiro n�mero da soma:");
				scanf("%f", &v1);
				printf("Digite o segundo n�mero da soma:");
				scanf("%f", &v2);
				a=v1+v2;
				printf("\nO resultado da soma � %.2f.\n", a);
			}
			if (si=='-'){
				printf("\nDigite o primeiro n�mero da subtra��o:");
				scanf("%f", &v1);
				printf("Digite o segundo n�mero da subtra��o:");
				scanf("%f", &v2);
				a=v1-v2;
				printf("\nO resultado da subtra��o � %.2f.\n", a);
			}
			if (si=='/'){
				printf("\nDigite o primeiro n�mero da divis�o:");
				scanf("%f", &v1);
				printf("Digite o segundo n�mero da divis�o:");
				scanf("%f", &v2);
				a=v1/v2;
				printf("\nO resultado da divis�o � %.2f.\n", a);
			}
			if (si=='*'){
				printf("\nDigite o primeiro n�mero da multiplica��o:");
				scanf("%f", &v1);
				printf("Digite o segundo n�mero da multiplica��o:");
				scanf("%f", &v2);
				a=v1*v2;
				printf("\nO resultado da multiplica��o � %.2f.\n", a);
			}
			printf("Tecle 'S' caso queira sair do programa,caso queira continuar, tecla qualquer outra.\n");
			cont= getche();
	}
	getch();
	return 0;
}
