#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int numero[12], i, j, x;
	printf("Classifica��o de elementos\n\n");
	for (i=0; i<=11; i++){
		printf("Informe o %d� valor:", i+1);
		scanf("%d", &numero[i]);}
	for (i=0; i<=10; i++)
	for (j=i+1; j<=11; j++){
		if (numero[i] < numero[j]){
			x=numero[i];
			numero[i]=numero[j];
			numero[j]=x;}}
	for (i=0; i<=11; i++)
	printf("O %d� valor �: %3d\n", i+1, numero[i]);
	getch();
	return 0;
}
