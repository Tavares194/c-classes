#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float a[10], d;
	int b, c;
	for (b=1; b<=40; b++){
		printf("Digite a nota do %dº aluno:", b);
		scanf("%f", &a[b]);}
	for (b=1; b<=9; b++)
	for (c=b+1; c<=10; c++){
		if (a[b] > a[c]){
			d=a[b];
			a[b]=a[c];
			a[c]=b;}
	}
	b=0;
	printf("Digite a nota do aluno a ser pesquisado:");
	scanf("%f", &b);
	c=1;
	d=0;
	while ((c<=40 && d==0)){
		if (a[c] == b)
			d=1;
		else if (a[c] != b)
			c++;}
	if (d==1)
		printf("%f foi localizado na posição %d.", b, c);
	else if (d==0)
		printf("%f não foi localizado.", b);
	getch();
	return 0;
}
