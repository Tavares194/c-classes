#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int a;
	for (a=20; a>=1; a--){
	printf("\n%d � par", a);
	a=a-1;
	printf("\n%d � �mpar", a);}
	getch();
	return 0;
}
