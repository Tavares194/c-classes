#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int a[30], b[30], c, d, e, f=0, g=1;
	for (c=1; c<=30; c++){
		printf("Digite o %d� valor da matriz A:", c);
		scanf("%d", &a[c]);
	}
	for (c=1; c<=30; c++){
		d=a[c]*a[c]*a[c];
		b[c]=d;
	}
	printf("\nDigite qual n�mero deseja pesquisar:");
	scanf("%d", &e);
	while ((g<=30) && (f == 0)){
		if (e == b[g]){
			f=1;
		}
		else;
			g++;
	}
	if (f == 1)
		printf("\n%d foi localizado na posi��o %d", e, g-1);
	else if (f == 0)
		printf("\n%d n�o foi localizado", e);
	getch();
	return 0;
}
