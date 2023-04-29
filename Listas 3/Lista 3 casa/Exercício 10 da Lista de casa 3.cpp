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
		printf("\nCalculadora.\n\nDigite '+' caso queira fazer uma soma.\nDigite '-' caso queira fazer uma subtração.\nDigite '/' caso queira fazer uma divisão.\nDigite '*' caso queira fazer uma multiplicação.\n\nDigite:");
		scanf("%c", &si);
			if (si=='+'){
				printf("\nDigite o primeiro número da soma:");
				scanf("%f", &v1);
				printf("Digite o segundo número da soma:");
				scanf("%f", &v2);
				a=v1+v2;
				printf("\nO resultado da soma é %.2f.\n", a);
			}
			if (si=='-'){
				printf("\nDigite o primeiro número da subtração:");
				scanf("%f", &v1);
				printf("Digite o segundo número da subtração:");
				scanf("%f", &v2);
				a=v1-v2;
				printf("\nO resultado da subtração é %.2f.\n", a);
			}
			if (si=='/'){
				printf("\nDigite o primeiro número da divisão:");
				scanf("%f", &v1);
				printf("Digite o segundo número da divisão:");
				scanf("%f", &v2);
				a=v1/v2;
				printf("\nO resultado da divisão é %.2f.\n", a);
			}
			if (si=='*'){
				printf("\nDigite o primeiro número da multiplicação:");
				scanf("%f", &v1);
				printf("Digite o segundo número da multiplicação:");
				scanf("%f", &v2);
				a=v1*v2;
				printf("\nO resultado da multiplicação é %.2f.\n", a);
			}
			printf("Tecle 'S' caso queira sair do programa,caso queira continuar, tecla qualquer outra.\n");
			cont= getche();
	}
	getch();
	return 0;
}
