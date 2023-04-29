#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	char a[10][80], b[80];
	int c, d;
		printf("Pesquisa da posição do nome dos alunos\n\n\n");
	for (c=1; c<=10; c++){
		printf("Digite o nome do %dº aluno:", c);
		fflush(stdin); fgets(a[c], 80, stdin);}
	for (c=1; c<=9; c++)
	for (d=c+1; d<=10; d++){
		if (strcmp(a[c], a[d]) < 0){
			strcpy(b, a[c]);
			strcpy(a[c], a[d]);
			strcpy(a[d], b);
			fflush(stdin);
		}
	}
	printf("\nDigite o nome do aluno para pesquisar sua posição na ordenação: ");
	fflush(stdin); fgets(b, 80, stdin);
	c=1;
	d=0;
	while ((c<=10 && d==0)){
		if (strcmp(b, a[c]) == 0)
		d=1;
		else if (strcmp(b, a[c]) != 0)
			c++;}
	if (d==1)
		printf("O nome digitado foi localizado na posição %d.", c);
	else if (d==0)
		printf("O nome digitado não foi localizado.");
	getch();
	return 0;
}
