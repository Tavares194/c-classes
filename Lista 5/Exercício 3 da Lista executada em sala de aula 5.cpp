#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int a[15], b[15], c, d, e;
	for (c=1; c<=15; c++){
		printf("Digite o %dº número:", c);
		scanf("%d", &a[c]);
        d= a[c];
		b[c]= d;}
	for (c=1; c<=15; c++){
	for (d=b[c]-1; d>1; d--){
		b[c]=b[c]*d;}}
	for (c=1; c<=14; c++)
	for (d=c+1; d<=15; d++){
		if (b[c]>b[d]){
		e=b[c];
		b[c]=b[d];
		b[d]=e;
		}
	}
	for (c=1; c<=15; c++)
	printf("\nO %d valor final é: %d", c, b[c]);
	getch();
	return 0;
}
