#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int a[20], b[30], c[50], d, e=21, f;
	for (d=1; d<=20; ++d){
		printf("Digite o %dº valor da matriz A:", d);
		scanf("%d", &a[d]);}
	for (d=1; d<=30; ++d){
		printf("Digite o %dº valor da matriz B:", d);
		scanf("%d", &b[d]);}
	for (d=1; d<=20; ++d){
		c[d]=a[d];}
	for (d=1; d<=30; ++d){
		c[e]=b[d];
		++e;}
	for (d=1; d<=49; ++d)
	for (e=d+1; e<=50; ++e){
		if (c[d] < c[e]){
			f=c[d];
			c[d]=c[e];
			c[e]=f;
		}
	}
	for (d=1; d<=50; ++d)
	printf("\nO %dº valor da matriz C: %d", d, c[d]);
	getch();
	return 0;
}
