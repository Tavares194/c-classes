#include <stdio.h>
#include <conio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int a[20], b[30], c[50], d, e;
	for (d=1; d<=20; ++d){
		printf("Número:", d);
		scanf("%d", &a[d]);}
	for (d=1; d<=30; ++d){
		printf("Número:", d);
		scanf("%d", &b[d]);}
	e=0;
	for (d=1; d<=20; ++d){
		c[d]=a[d];}
	for (d=21; d<=50; ++d){
		++e;
		c[d]=b[e];}
	for (d=1; d<=50; d++)
	printf("%d, ", c[d]);
	getch();
	return 0;
}
