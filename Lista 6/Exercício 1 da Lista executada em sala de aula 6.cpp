#include <stdio.h>
#include <conio.h>

int main(){
	int a[5][3], b[5][3], c[5][3], d, e;
	for (d=1; d<=5; d++)
	for (e=1; e<=3; e++){
		printf("Insira o valor da linha %d e %d coluna matriz A: ", d, e); scanf("%d", &a[d][e]);
	}
	for (d=1; d<=5; d++)
	for (e=1; e<=3; e++){
		printf("Insira o valor da linha %d e %d coluna matriz B: ", d, e); scanf("%d", &b[d][e]);
	}
	for (d=1; d<=5; d++){
		for (e=1; e<=2; e++){
			c[d][e]=a[d][e]+b[d][e];
			printf("\nOs valores da matriz C linha %d coluna %d eh: %d.", d, e, c[d][e]);
		}
	}
	c[5][3]=a[5][3]+b[5][3];
	printf("\nOs valores da matriz C linha 5 coluna 3 eh: %d.", c[5][3]);
	getch();
	return 0;
}
