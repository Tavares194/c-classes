#include <stdio.h>
#include <conio.h>

int main(){
	int ant, prox, soma, i;
	i=1;
	ant=0;
	prox=1;
	soma=1;
	do{
		++i;
		printf("\n%d", soma);
		soma=ant+prox;
		ant=prox;
		prox=soma;}
	while (i<=15);
	getch();
	return 0;
}
