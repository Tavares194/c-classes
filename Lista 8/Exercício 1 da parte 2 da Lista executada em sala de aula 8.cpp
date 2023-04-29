#include <stdio.h>
#include <conio.h>
int a, b, c;

int z(int x);

int main(){
	printf("Quantos dos primeiros numeros: "); scanf("%d", &a);
	printf("A somatoria eh: %d", z(a));
}

int z(int x){
	c=x;
	for (b=1; b<c; b++){
		x=b+x;
	}
	return x;
}
