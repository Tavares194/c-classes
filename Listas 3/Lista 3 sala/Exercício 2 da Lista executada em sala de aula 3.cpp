#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int a, b;
	for (b=1; b<=100; ++b){
	a=a+b;
	if (a==5050){
	printf("Soma dos cem primeiros números inteiros: %d", a);}}
	getch();
	return 0;
}
