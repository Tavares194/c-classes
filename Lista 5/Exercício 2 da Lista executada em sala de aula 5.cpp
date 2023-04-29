#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int a[8], b[8], c, d, e, f;
	for (c=1; c<=8; c++){
		printf("Digite o %dº valor:", c);
		scanf("%d", &a[c]);
		b[c]=a[c]*5;
	}
	for (c=1; c<=7; c++)
	for (d=c+1; d<=8; d++){
		if (b[c] > b[d]){
			e = b[c];
			b[c] = b[d];
			b[d] = e;
		}
	}
	for (c=1; c<=8; c++){
		printf("%d, ", b[c]);
	}
    e=0;
	printf("\nDigite o número a ser pesquisado:");
    scanf("%d", &e);
	c=1;
    f=0;
    while ((c <=8 && f == 0)){
    	if (b[c] == e){
    		f=1;
        }
    	else if (b[c] != e)
    		c++;
	}
	if (f == 1)
		printf("\n%d foi localizado na posição %d.", e, c);
	else if (f == 0)
		printf("\n%d não foi localizado.", e);
	getch();
	return 0;
}
