#include <stdio.h>
#include <conio.h>
#include <math.h>

int pot(float x, float y, float z);

int main(){
	float a, b, c;
	printf("Digite o numero base: "); scanf("%f", &a);
	printf("Digite o expoente: "); scanf("%f", &b);
	pot(a, b, c);
}
int pot(float x, float y, float z){
	z = pow(x, y);
	printf("O resultado eh: %.2f", z);
}
