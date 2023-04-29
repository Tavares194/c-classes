#include <stdio.h>
#include <conio.h>

int main (){
	int a[7], b[7], c[7][2], d, e;
	for (d=1; d<=7; d++){
		printf("Digite o %do valor da matriz A: ", d); scanf("%d", &a[d]);
	}
	for (d=1; d<=7; d++){
		printf("Informe o %do valor da matriz B: ", d); scanf("%d", &b[d]);
	}
	for (d=1; d<=7; d++){
		c[d][1]= a[d];
	}
	for (d=1; d<=7; d++){
		c[d][2]= b[d];
	}
	for (d=1; d<=7; d++){
		printf("\nOs valores da matriz C coluna 1 eh: %d", c[d][1]);}
	for (d=1; d<=7; d++){
		printf("\nOs valores da matriz C coluna 2 eh: %d", c[d][2]);}
	getch();
	return 0;
}
