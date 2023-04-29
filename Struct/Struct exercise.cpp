#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
    struct y{
    char d[40];
    char c[70];
    int cod;
    float pre;
	};
    printf ("------Aeroporto SP Viagens------\n");
    printf ("\n|Cadastro de 5 pacotes de viagem|\n");
    struct y a[5];
    int b, e, l, r, h=5;
    char i[70];
    float g;
    while (h == 5){
	printf("\n1. Cadastro\n2. Listagem dos pacotes em ordem crescente de preço\n3. Alteração do destino\n4. Pesquisa pelo código do pacote\n5. Sair\n\nDigite: ");
    scanf("%d", &e);
	switch (e){
	case 1:
	for (b=1; b<=5; b++){
		printf ("\n%dº Pacote", b);
		printf("\nDigite o destino: "); fflush(stdin); fgets(a[b].d, 40, stdin);
		printf("Informe a duração: "); fflush(stdin); fgets(a[b].c, 70, stdin);
		printf("Digite o preço: "); scanf("%f", &a[b].pre);
		printf("Transcreva o código do pacote: "); scanf("%d", &a[b].cod);
		}
		break;
	case 2:
		for (b=1; b<=4; b++){
			for (l=b+1; l<=5; l++){
				if (a[b].pre>a[l].pre){
					strcpy(i, a[b].d);
					strcpy(a[b].d, a[l].d);
					strcpy(a[l].d, i);
					strcpy(i, a[b].c);
					strcpy(a[b].c, a[l].c);
					strcpy(a[l].c, i);
					g=a[b].cod;
					a[b].cod=a[l].cod;
					a[l].cod=g;
					g=a[b].pre;
					a[b].pre=a[l].pre;
					a[l].pre=g;
				}
			}
		}
			for (b=1; b<=5; b++){
			printf("\nViagem: %sPreço da viagem: R$%.2f\n", a[b].d, a[b].pre);
		}
		break;
	case 3:
		printf("\nDigite o código do pacote que terá seu destino alterado: ");
		scanf("%d", &r);
		b=1;
		e=0;
		while ((b<=5 && e==0)){
			if (a[b].cod == r)
				e=1;
			else if (a[b].cod != r)
				b++;
		}
			if (e == 1){
				printf("Qual será o novo destino?\n"); fflush(stdin); fgets(a[b].d, 40, stdin);
			}
			else if (e == 0){
				printf("\nO código do pacote não foi encontrado.\n");
			}
			break;
	case 4:
		printf("\nDigite o código do pacote que será pesquisado: ");
		scanf("%d", &r);
		b=1;
		e=0;
		while ((b<=5 && e==0)){
			if (a[b].cod == r)
				e=1;
			else if (a[b].cod != r)
				b++;
		}
			if (e == 1){
			printf("\nO destino é: %s", a[b].d);
			printf("A duração é de %s", a[b].c);
			printf("O preço é R$%.2f\n", a[b].pre);
			printf("O código é: %i\n", a[b].cod);
			}
			else
            printf ("\nO código do pacote não foi encontrado.\n");			
			break;
	case 5:
		h=1;
		break;
		default: printf ("\nOpção inválida!\n");
	}}
getch();
return 0;
}

