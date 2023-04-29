#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int a[20], b[20], c, d, e;
	for (c=1; c<=20; c++){
		printf("Digite o %dº valor da matriz A:", c);
		scanf("%d", &a[c]);
		b[c]=a[c]+2;
	}
	for (c=1; c<=19; c++)
	for (d=c+1; d<=20; d++){
		if (b[c] > b[d]){
			e=b[c];
			b[c]=b[d];
			b[d]=e;
		}
	}
	printf("\nDigite o número a ser pesquisado:");
	scanf("%d", &d);
	c=1;
	e=0;
	while ((c<=20 && e == 0)){
		if (d == b[c])
			e=1;
		else if (d != b[c])
			c++;
	}
	if (e == 1)
		printf("\n%d foi localizado na posição %d.", d, c);
	else if (e == 0)
		printf("\n%d não foi localizado.", d);
	getch();
	return 0;
}
