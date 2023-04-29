#include <stdio.h>
#include <conio.h>

int pres(float *w, float *x, float *y, int *z);

int main(){
	float a, b, c;
	int d;
	printf("\nQual o valor da prestacao: "); scanf("%f", &a);
	printf("Qual a taxa: "); scanf("%f", &b);
	printf("Quantos meses: "); scanf("%d", &d);
	pres(&a, &b, &c, &d);
	printf("\nA prestacao atual eh: %f", c);
}

int pres(float *w, float *x, float *y, int *z){
	*y = *w+(*w*(*x/100)**z);
}
