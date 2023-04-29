#include<stdio.h>
#include<conio.h>

int main(){
	int a[10], b[10][3], c, d, e=0, f[10];
	for (c=1; c<=10; ++c){
		printf("Digite o %do valor da matriz A: ", c);
		scanf("%d", &a[c]);
		b[c][1]=a[c]+5;
		b[c][3]=a[c]*a[c];
		f[c]=a[c];
		}
	for (c=1; c<=10; c++){
    	if (a[c]>=3){
			for (d=f[c]-1; d>=1; d--){
        		a[c]=d*a[c];
			}
			b[c][2]=a[c];
		}
		else if (a[c]<3)
			b[c][2]=a[c];
	}
	for (c=1; c<=10; c++){
		printf("\nOs valores da matriz B coluna 1 eh: %d.", b[c][1]);
	}
	for (c=1; c<=10; c++){
		printf("\nOs valores da matriz B coluna 2 eh: %d.", b[c][2]);
	}
	for (c=1; c<=10; c++){
		printf("\nOs valores da matriz B coluna 3 eh: %d.", b[c][3]);
	}
	getch();
	return 0;
	}
