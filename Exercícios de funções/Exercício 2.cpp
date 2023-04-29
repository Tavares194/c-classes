#include<stdio.h>
#include<conio.h>

int main (){
	int n=7, i=5, fat=1, o, com, m;
	for(o=1; o<=n; ++o){
	fat=fat*o;}
	m=n-i;
	com = fat/m;
	printf("%i", com);
	getch();
	return 0;
}
