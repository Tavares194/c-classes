#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	float NUM1, NUM2, NUM3;
	printf("O primeiro n�mero:");
	scanf("%f", &NUM1);
	printf("O segundo n�mero:");
	scanf("%f", &NUM2);
	printf("O terceiro n�mero:");
	scanf("%f", &NUM3);
	if (NUM1<NUM2 && NUM1<NUM3 && NUM2<NUM3)
	   printf("O maior � %f, o menor � %f e o do meio � %f.", NUM3, NUM1, NUM2);
	else if (NUM1<NUM2 && NUM1<NUM3 && NUM3<NUM2)
	   printf("O maior � %f, o menor � %f e o do meio � %f.", NUM2, NUM1, NUM3);
	else if (NUM2<NUM1 && NUM2<NUM3 && NUM1<NUM3)
	   printf("O maior � %f, o menor � %f e o do meio � %f.", NUM3, NUM2, NUM1);
	else if (NUM2<NUM1 && NUM2<NUM3 && NUM3<NUM1)
	   printf("O maior � %f, o menor � %f e o do meio � %f.", NUM1, NUM2, NUM3);
	else if (NUM3<NUM1 && NUM3<NUM2 && NUM2<NUM1)
	   printf("O maior � %f, o menor � %f e o do meio � %f.", NUM1, NUM3, NUM2);
	else if (NUM3<NUM1 && NUM3<NUM2 && NUM1<NUM2)
	   printf("O maior � %f, o menor � %f e o do meio � %f.", NUM2, NUM3, NUM1);
	else if (NUM1==NUM2 && NUM1<NUM3)
	   printf("O maior n�mero � %f, o primeiro e segundo n�mero s�o iguais (%f).", NUM3, NUM1);
	else if (NUM1==NUM2 && NUM1>NUM3)
	   printf("O menor n�mero � %f, o primeiro e segundo n�mero s�o iguais (%f).", NUM3, NUM1);
	else if (NUM2==NUM3 && NUM2<NUM1)
	   printf("O maior n�mero � %f, o segundo e terceiro n�mero s�o iguais (%f).", NUM1, NUM2);
	else if (NUM2==NUM3 && NUM2>NUM1)
	   printf("O menor n�mero � %f, o segundo e terceiro n�mero s�o iguais (%f).", NUM1, NUM2);
	else if (NUM3==NUM1 && NUM3<NUM2)
	   printf("O maior n�mero � %f, o primeiro e terceiro n�mero s�o iguais (%f).", NUM2, NUM3);
	else if (NUM3==NUM1 && NUM3>NUM2)
	   printf("O menor n�mero � %f, o primeiro e terceiro n�mero s�o iguais (%f).", NUM2, NUM3);
	else if (NUM1==NUM2 && NUM2==NUM3)
	   printf("Todos os n�meros s�o iguais");
	getch();
	return 0;
}
