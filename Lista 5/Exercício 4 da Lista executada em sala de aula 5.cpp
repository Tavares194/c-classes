#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int a[12], b[12], c[12], d, e, f, g=1;
	for (d=1; d<=12; d++){
		printf("Informe o %dº valor da matriz A:", d);
		scanf("%d", &a[d]);
	}
	for (d=1; d<=11; d++)
	for (e=d+1; e<=12; e++){
		if (a[d] > a[e]){
			f=a[d];
			a[d]=a[e];
			a[e]=f;}
	}
	for (d=1; d<=12; d++){
		printf("Informe o %dº valor da matriz B:", d);
		scanf("%d", &b[d]);
	}
	g=1;
	for (d=1; d<=11; d++)
	for (e=d+1; e<=12; e++){
		if (b[d] > b[e]){
			f=b[d];
			b[d]=b[e];
			b[e]=f;}
	}
	for (d=1; d<=12; d++){
		f=a[d]+b[d];
		c[d]=f;}
	
	for (d=1; d<=11; d++)
	for (e=d+1; e<=12; e++){
		if (c[d] > c[e]){
			f=b[d];
			c[d]=c[e];
			c[e]=f;}
	}
	for (d=1; d<=12; d++)
	printf("\nO %dº resultado é: %d", d, c[d]);
	getch();
	return 0;
}
