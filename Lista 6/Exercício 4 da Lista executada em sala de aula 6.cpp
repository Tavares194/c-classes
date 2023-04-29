#include <stdio.h>
#include <conio.h>

int main(){
	int a[4], b[4], c[4][2], d, e;
	for (d=1; d<=4; d++){
		printf("Digite o %do valor da matriz A: ", d);
		scanf("%d", &a[d]);
		c[d][1]=a[d]*2;
	}
	for (d=1; d<=4; d++){
		printf("Informe o %do valor da matriz B: ", d);
		scanf("%d", &b[d]);
		c[d][2]=b[d]-5;
	}
	for (d=1; d<=3; d++){
		printf("\nOs valores da matriz C coluna 1 eh: %d.", c[d][1]);
	}
	c[4][1]=a[4]*2;
	printf("\nOs valores da matriz C coluna 1 eh: %d.", c[4][1]);
	for (d=1; d<=4; d++){
		printf("\nOs valores da matriz C coluna 2 eh: %d.", c[d][2]);
	}
	getch();
	return 0;
}
