#include <stdio.h>
#include <conio.h>

int a[13], b[13], c[13], d, e, f;

int ler1(int x[13]);
int ler2(int y[13]);
int exb(int x[13], int y[13], int z[13]);

int main(){
	ler1(a);
	ler2(b);
	exb(a, b, c);
}
int ler1(int x[13]){
	for (d=1; d<=12; d++){
		printf("Digite o %do valor da matriz A: ", d); scanf("%d", &x[d]);
	}
	for (d=1; d<=11; d++){
		for (e=d+1; e<=12; e++){
			if (x[d] > x[e]){
				f=x[d];
				x[d]=x[e];
				x[e]=f;
			}
		}
	}
}
int ler2(int y[13]){
	for (d=1; d<=12; d++){
		printf("Informe o %do valor da matriz B: ", d); scanf("%d", &y[d]);
	}
	for (d=1; d<=11; d++){
		for (e=d+1; e<=12; e++){
			if (y[d] > y[e]){
				f=y[d];
				y[d]=y[e];
				y[e]=f;
			}
		}
	}
}
int exb(int x[13], int y[13], int z[13]){
	int g;
	for (d=1; d<=12; d++){
		z[d]=x[d]+y[d];
	}
	for (d=1; d<=11; d++){
		for (e=d+1; e<=12; e++){
			if (z[d] > z[e]){
				g=z[d];
				z[d]=z[e];
				z[e]=g;
			}
		}
	}
	for (d=1; d<=12; d++)
	printf("\nO %do valor da matriz C eh: %d", d, z[d]);
}
