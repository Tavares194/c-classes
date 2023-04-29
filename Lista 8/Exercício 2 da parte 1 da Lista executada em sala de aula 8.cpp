#include <stdio.h>
#include <conio.h>
#include <string.h>

int d, e;
struct z{
	char nome[90];
	float nota1;
	float nota2;
	float bim;
};
struct z a[20];

int rotreg ();
int rotalf ();
int rotalt ();
int rotpes ();
int rotapr ();
int rotrpr ();

int main(){
	int h;
	while(h<7){
	printf("\n1-Registro de Alunos\n2-Ordem Alfabetica\n3-Alteracao de Registro\n4-Pesquisa de Alunos\n5-Lista de Aprovados\n6-Lista de Reprovados\n\nDigite: "); scanf("%d", &h);
	switch(h){
		case 1: rotreg(); break;
		case 2: rotalf(); break;
		case 3: rotalt(); break;
		case 4: rotpes(); break;
		case 5: rotapr(); break;
		case 6: rotrpr(); break;
		default: h=7;
		}
	}
	return 0;
}

int rotreg(){
	for (d=1; d<=20; d++){
		printf("\nRegistro %d\n", d);
		printf("Informe seu nome: "); fflush(stdin); fgets(a[d].nome, 90, stdin);
		printf("Digite a sua 1a nota bimestral: "); scanf("%f", &a[d].nota1);
		printf("Digite a sua 2a nota bimestral: "); scanf("%f", &a[d].nota2);
	}
}
int rotalf(){
	char b[5][90], g[90];
	for (d=1; d<=20; d++){
		strcpy(b[d], a[d].nome);
	}
	for (d=1; d<=19; d++){
		for (e=d+1; e<=20; e++){
			if(strcmp(b[d], b[e])>0){
				strcpy(g, b[d]);
				strcpy(b[d], b[e]);
				strcpy(b[e], g);
			}
		}
	}
	printf("\n");
	for (d=1; d<=20; d++){
	printf("%s", &b[d]);
	}
	printf("\n");
}
int rotalt(){
	int g, h, i;
	printf("\nDigite o numero correspondente ao registro que está errado: "); scanf("%d", &g);
		for (d=1; d<=20; d++){
			if (g == d){
				printf("\n1. Nome\n2. Primeira Nota Bimestral\n3. Segunda Nota Bimestral\nIndique o campo com erro: "); scanf("%d", &h);
				if (h == 1){
					printf("\nDigite novamente o nome: "); fflush(stdin); fgets(a[d].nome, 90, stdin);
				}
				else if (h == 2){
					printf("\nDigite novamente a 1a nota: "); scanf("%f", &a[d].nota1);
				}
				else if (h == 3){
					printf("\nDigite novamente a 2a nota: "); scanf("%f", &a[d].nota2);
				}
			}
		}
}
int rotpes(){
	char g[90];
	printf("\nDigite o nome a ser pesquisado: "); fflush(stdin); fgets(g, 90, stdin);
		d=1;
		e=0;
		while ((d<=5 && e==0)){
			if (strcmp(a[d].nome, g)==0)
				e=1;
			else if (strcmp(a[d].nome, g)!=0)
				d++;
		}
	printf("\nNome: %sNota 1: %.2f\nNota 2: %.2f\n", a[d].nome, a[d].nota1, a[d].nota2);
}
int rotapr(){
	for (d=1; d<=20; d++){
		a[d].bim=(a[d].nota1+a[d].nota2)/2;
	}
	printf("\n");
	for (d=1; d<=20; d++){
		if(a[d].bim>=7.00){
			printf("%s Aprovado", a[d].nome);
		}
	}
	printf("\n");
}
int rotrpr(){
	for (d=1; d<=20; d++){
		a[d].bim=(a[d].nota1+a[d].nota2)/2;
	}
	printf("\n");
	for (d=1; d<=20; d++){
		if(a[d].bim<7.00){
			printf("%s Reprovado", a[d].nome);
		}
	}
	printf("\n");
}
