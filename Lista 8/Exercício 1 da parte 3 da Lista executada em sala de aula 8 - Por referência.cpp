#include <stdio.h>
#include <conio.h>

int b, c;
int z(int *x);

int main(){
	int a;
	printf("Quantos dos primeiros numeros: "); scanf("%d", &a);
	z(&a);
	printf("A somatoria eh: %d", a);
}

int z(int *x){
	c=*x;
	for (b=1; b<c; b++){
		*x=b+*x;
	}
}
