#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int a;
	a=1;
	while (a<=200){
	a=a+1;
	if (a%4==0)
	printf("%d, ", a);}
	getch();
	return 0;
}
