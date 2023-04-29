#include<stdio.h>
#include<conio.h>
#include<locale.h>

int i;
struct aprovacao
{
    char nome[100];
	float P1;
	float P2;
	float trabalho;
	float media;
};
struct aprovacao aprov[19];
float a, b, c, k, l, m;

int rotcadastro(){
	setlocale(LC_ALL,"Portuguese");
	for (i=0;i<=18;++i){
	printf("\n%d° Registro de aluno", i+1);
	printf("\n * Nome: ");
	fflush(stdin); fgets(aprov[i].nome,100,stdin);
	printf(" * P1: ");
	scanf("%f", &aprov[i].P1);
	printf(" * P2: ");
	scanf("%f", &aprov[i].P2);
	printf(" * Trabalho: ");
	scanf("%f", &aprov[i].trabalho);
	}
}

int rotinformacoes(){
	setlocale(LC_ALL,"Portuguese");
	printf("\n\n * Informações sobre o aluno\n\n");
	for(i=0;i<=18;++i){
	a = (aprov[i].P1);
	b = (aprov[i].P2);
	c = (aprov[i].trabalho);

	printf("\n%d° Aluno\n\n", i+1);
	printf("\n * Nome: %s", aprov[i].nome);
	printf(" * Nota P1: %2.f", a);
	printf("\n * Nota P2: %2.f", b);
	printf("\n * Nota Trabalho: %2.f\n", c);
	}
}

int rotaprovados(){
	setlocale(LC_ALL,"Portuguese");
	printf("\nAlunos aprovados\n");
	for(i=0; i<=18; ++i){
	k = (aprov[i].P1);
	l = (aprov[i].P2);
	m = (aprov[i].trabalho);

	aprov[i].media = k + l * 0,7 + m * 0,3;

	if(aprov[i].media>=6)
	puts(aprov[i].nome);}
}

int main (){
	int escolha, e = 1;
	setlocale(LC_ALL,"Portuguese");
	while (e!=0){
	printf ("\n\nCadastro dos Alunos\n\n\n1 - Cadastro\n \n2 - Informações dos Alunos\n \n3 - Alunos Aprovados\n \n4 - Sair\n \n");
	printf("\nSelecione o que deseja: ");
	scanf("%i", &escolha);
	switch(escolha)
	{
		case 1:	rotcadastro(); fflush(stdin); break;
		case 2: rotinformacoes(); fflush(stdin); break;
		case 3: rotaprovados(); fflush(stdin); break;
		case 4: e=0; printf("\nObrigado por utilizar o programa!"); break;
		default: printf("\nOpção inválida - Tecle <ENTER>\n"); break;
	}
}
getch();
return 0;
}
