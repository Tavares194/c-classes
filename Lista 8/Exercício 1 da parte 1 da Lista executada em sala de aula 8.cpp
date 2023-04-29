#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <locale.h>

int d, e, f;
struct z{
	char nome[90];
	char end[120];
	char email[120];
	char tel[20];
};
struct z a[5];

int rotreg();
int rotpesq();
int rotalf();
int rotalt();
int rotdel();

int main (){
	setlocale(LC_ALL, "Portuguese");
	int h;
	while(h<6){
		printf("\n1. Cadastro e registros\n2. Pesquisa de registro\n3. Classificação alfabética\n4. Alteração de registro\n5. Deletar Elementos\n\nDigite: ");
		scanf("%d", &h);
		switch(h){
			case 1: rotreg(); break;
			case 2: rotpesq(); break;
			case 3: rotalf(); break;
			case 4: rotalt(); break;
			case 5: rotdel(); break;
			default: h=6; break;
		}
	}
	return 0;
}
int rotreg(){
	for (d=1; d<=5; d++){
		printf("\nRegistro %dº\n", d);
		printf("\nDigite o nome: "); fflush(stdin); fgets(a[d].nome, 90, stdin);
		printf("Coloque o endereço: "); fflush(stdin); fgets(a[d].end, 120, stdin);
		printf("Informe seu email: "); fflush(stdin); fgets(a[d].email, 120, stdin);
		printf("Digite o telefone: "); fflush(stdin); fgets(a[d].tel, 20, stdin);
	}
}
int rotpesq(){
	char j[90];
	printf("\nDigite o nome a ser pesquisado: "); fflush(stdin); fgets(j, 90, stdin);
		d=1;
		e=0;
		while ((d<=5 && e==0)){
			if (strcmp(a[d].nome, j)==0)
				e=1;
			else if (strcmp(a[d].nome, j)!=0)
				d++;
		}
		if (e==1)
			printf("\n%s foi localizado no registro %d.\n", j, d);
		else if (e==0)
			printf("\n%s não foi localizado.\n", j);
}
int rotalf(){
		char i[90];
		char b[5][90];
		for (d=1; d<=5; d++){
			strcpy(b[d], a[d].nome);
		}
	for (d=1; d<=4; d++){
			for (e=d+1; e<=5; e++){
				if (strcmp (b[d], b[e]) >0)
				{
					strcpy(i, b[d]);
					strcpy(b[d], b[e]);
					strcpy(b[e], i);
				}
			}
	}
	for (d=1; d<=5; d++){
		printf("%s", b[d]);
	}
}
int rotalt(){
	int g, h, i;
	printf("\nDigite o número correspondente ao registro que está errado: "); scanf("%d", &g);
		for (i=1; i<=5; i++){
			if (g == i){
				printf("\n1. Nome\n2. Endereço\n3. Email\n4. Telefone\nIndique onde está o erro: "); scanf("%d", &h);
				if (h == 1){
					printf("\nDigite novamente o nome: "); fflush(stdin); fgets(a[i].nome, 90, stdin);
				}
				else if (h == 2){
					printf("\nDigite novamente a endereço: "); fflush(stdin); fgets(a[i].end, 120, stdin);
				}
				else if (h == 3){
					printf("\nDigite novamente o email: "); fflush(stdin); fgets(a[i].email, 120, stdin);
				}
				else if (h == 4){
					printf("\nDigite novamente o telefone: "); fflush(stdin); fgets(a[i].tel, 20, stdin);
				}
			}
		}
}
int rotdel(){
	int h;
	printf("\nDigite o numero correspondente ao registro que será deletado:"); scanf("%d", &h);
	switch(h){
		case 1: 
			memset(a[1].nome, 0, 90); memset(a[1].end, 0, 120); memset(a[1].email, 0, 120); memset(a[1].tel, 0, 20);
			printf("Registro 1 Deletado.\n");  break;
		case 2: 
			memset(a[2].nome, 0, 90); memset(a[2].end, 0, 120); memset(a[2].email, 0, 120); memset(a[2].tel, 0, 20);
			printf("Registro 2 Deletado.\n");  break;
		case 3: 
			memset(a[3].nome, 0, 90); memset(a[3].end, 0, 120); memset(a[3].email, 0, 120); memset(a[3].tel, 0, 20);
			printf("Registro 3 Deletado.\n");  break;
		case 4: 
			memset(a[4].nome, 0, 90); memset(a[4].end, 0, 120); memset(a[4].email, 0, 120); memset(a[4].tel, 0, 20);
			printf("Registro 4 Deletado.\n");  break;
		case 5: 
			memset(a[5].nome, 0, 90); memset(a[5].end, 0, 120); memset(a[5].email, 0, 120); memset(a[5].tel, 0, 20);
			printf("Registro 5 Deletado.\n");  break;
		default: printf("\nRegistro Inesxistente."); break;
	}
}
