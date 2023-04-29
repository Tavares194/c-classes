#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	int NUM, NUMKEY, NUMKEYMENOR, NUMKEYMAIOR;
	printf("Digite um número entre 0 e 100:");
	scanf("%d", &NUM);
	NUMKEY=50;
	NUMKEYMENOR=NUM-NUMKEY;
	NUMKEYMAIOR=NUMKEY-NUM;
	if (NUM>=0 && NUM<=100 && NUMKEY<NUM)
	 printf("A diferença entre 50 e %d é %d.", NUM, NUMKEYMENOR);
	else if(NUM>=0 && NUM<=100 && NUMKEY>NUM)
	 printf("A diferença entre 50 e %d é %d.", NUM, NUMKEYMAIOR);
	else if (NUMKEY==NUM)
	 printf("O número é igual.");
	getch();
	return 0;
}
