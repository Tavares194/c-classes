#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
    struct y{
    char b[90];
    char c[120];
    int tel;
    int ida;
    };
    struct y a[5];
    int d, e, f, g, h=5;
    char i[90];
    while (h == 5){
	printf("\n1. Cadastro e registros\n2. Pesquisa de registro\n3. Classificação alfabética\n4. Alteração de registro\n5. Sair\n\nDigite: ");
    scanf("%d", &e);
	switch (e){
	case 1:
	for (d=1; d<=5; d++){
		printf("\nDigite o nome: "); fflush(stdin); fgets(a[d].b, 90, stdin);
		printf("Coloque o endereço: "); fflush(stdin); fgets(a[d].c, 120, stdin);
		printf("Informe a idade: "); scanf("%d", &a[d].ida);
		printf("Digite o telefone: "); scanf("%d", &a[d].tel);
		}
		break;
	case 2:
		printf("\nDigite a idade a ser pesquisada: "); scanf("%d", &f);
		d=1;
		g=0;
		while ((d<=5 && g==0)){
			if (a[d].ida == f)
				g=1;
			else if (a[d].ida != f)
				d++;
		}
		if (g==1)
			printf("\n%d foi localizado no registro %d.\n", f, d);
		else if (g==0)
			printf("\n%d não foi localizado.\n", f);
		break;
	case 3:
		for (d=1; d<=4; d++){
			for (f=d+1; f<=5; f++){
				if (strcmp (a[d].b, a[f].b) >0)
				{
					strcpy(i, a[d].b);
					strcpy(a[d].b, a[f].b);
					strcpy(a[f].b, i);
				}
			}
		}
		for (d=1; d<=5; d++){
			printf("%s", a[d].b);
		}
		break;
	case 4:
		printf("\nDigite o número correspondente ao registro que está errado: "); scanf("%d", &f);
		for (d=1; d<=5; d++){
			if (f == d){
				printf("\n1. Nome\n2. Idade\n3. Endereço\n4. Telefone\nIndique onde está o erro: "); scanf("%d", &g);
				if (g == 1){
					printf("\nDigite novamente o nome: "); fflush(stdin); fgets(a[d].b, 90, stdin);
				}
				else if (g == 2){
					printf("\nDigite novamente a idade: "); scanf("%d", &a[d].ida);
				}
				else if (g == 3){
					printf("\nDigite novamente o endereço: "); fflush(stdin); fgets(a[d].c, 120, stdin);
				}
				else if (g == 4){
					printf("\nDigite novamente o telefone: "); scanf("%d", &a[d].tel);
				}
			}
		}
		break;
	case 5:
		h=1;
}
	if (e>5 || e<0)
	printf("\nOpção inválida.\n");
}
getch();
return 0;
}
