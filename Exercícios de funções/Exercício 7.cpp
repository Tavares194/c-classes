#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h>

float a, b;
int potencia();
int raiz();
int fatorial();

int main(){
	setlocale(LC_ALL, "Portuguese");
	int cl, cont=1;
		while(cont == 1){
	printf("|CALCULADORA AVANÇADA|\n\n\n1. Potência de 4\n2. Raiz quadrada\n3. Fatorial\n4. Sair\n\n\nInforme a operação que deseja utilizar: ");
	scanf("%d", &cl);
	switch (cl){
		case 1: potencia(); break;
		case 2: raiz(); break;
		case 3: fatorial(); break;
		case 4: cont=2; printf("\nTecle <ENTER>"); break;
		default: printf("Operação inválida!");
	}
}
getch();
return 0;
}   

int potencia(){
	printf("\nEntre com o valor da base da potência de 4: ");
	scanf("%f", &a);
	b=pow(a,4);
	printf("O resultado de %2.f elevado à 4 é: %2.f\n\n", a, b);
}

int raiz(){
	printf("\nEntre com a raiz que deseja calcular: ");
	scanf("%f", &a);
	b=sqrt(a); 
	printf("A raiz de %2.f é: %2.f\n\n", a, b);
}

int fatorial(){
	int d=1, e, f;
	printf("\nEntre com o número que queira calcular o fatorial: ");
	scanf("%d", &f);
	for(e=1; e<=f; ++e){
	d=d*e;}
	printf("O valor do fatorial do número %d é: %d\n\n", f, d);
}
