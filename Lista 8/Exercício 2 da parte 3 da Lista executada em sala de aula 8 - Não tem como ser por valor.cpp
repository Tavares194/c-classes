#include <stdio.h>
#include <conio.h>

int a[30], b[30], c[60], d, e, f;

int ler1(int x[30]);
int ler2(int y[30]);
int jun(int x[30], int y[30], int z[60]);
int exb(int z[60]);

int main(){
	ler1(a);
	ler2(b);
	jun(a, b, c);
	exb(c);
}

int ler1(int x[30]){
	for (d=1; d<=5; d++){
		printf("Digite o %do valor da matriz A: ", d); scanf("%d", &x[d]);
	}
}

int ler2(int y[30]){
	for (d=1; d<=5; d++){
		printf("Digite o %do valor da matriz B: ", d); scanf("%d", &y[d]);
	}
}

int jun(int x[30], int y[30], int z[60]){
	for (d=1; d<=5; d++){
		e=x[d]; z[d]=e;
	}
	f=6;
	for (d=1; d<=5; d++){
		e=y[d]; z[f]=e;
		f++;
	}
}
int exb(int z[60]){
	for (d=1; d<=10; d++){
		printf("\nO %do valor da matriz C eh: %d", d, z[d]);
	}
}
