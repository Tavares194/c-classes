#include <stdio.h>
#include <conio.h>

int a, b=0, c=1, d;

int fib(int x);

int main(){
	printf("Numero de termos: "); scanf("%d", &a);
	fib(a);
}

int fib(int x){
	d++;
	x++;
	for (d=1; d<x; d++){
		b=b+c;
		c=b-c;
		printf("\n%d", b);
	}
}
