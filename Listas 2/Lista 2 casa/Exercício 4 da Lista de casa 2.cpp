#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	float NUM1, NUM2, NUM3;
	printf("O primeiro número:");
	scanf("%f", &NUM1);
	printf("O segundo número:");
	scanf("%f", &NUM2);
	printf("O terceiro número:");
	scanf("%f", &NUM3);
	if (NUM1<NUM2 && NUM1<NUM3 && NUM2<NUM3)
	   printf("O maior é %f, o menor é %f e o do meio é %f.", NUM3, NUM1, NUM2);
	else if (NUM1<NUM2 && NUM1<NUM3 && NUM3<NUM2)
	   printf("O maior é %f, o menor é %f e o do meio é %f.", NUM2, NUM1, NUM3);
	else if (NUM2<NUM1 && NUM2<NUM3 && NUM1<NUM3)
	   printf("O maior é %f, o menor é %f e o do meio é %f.", NUM3, NUM2, NUM1);
	else if (NUM2<NUM1 && NUM2<NUM3 && NUM3<NUM1)
	   printf("O maior é %f, o menor é %f e o do meio é %f.", NUM1, NUM2, NUM3);
	else if (NUM3<NUM1 && NUM3<NUM2 && NUM2<NUM1)
	   printf("O maior é %f, o menor é %f e o do meio é %f.", NUM1, NUM3, NUM2);
	else if (NUM3<NUM1 && NUM3<NUM2 && NUM1<NUM2)
	   printf("O maior é %f, o menor é %f e o do meio é %f.", NUM2, NUM3, NUM1);
	else if (NUM1==NUM2 && NUM1<NUM3)
	   printf("O maior número é %f, o primeiro e segundo número são iguais (%f).", NUM3, NUM1);
	else if (NUM1==NUM2 && NUM1>NUM3)
	   printf("O menor número é %f, o primeiro e segundo número são iguais (%f).", NUM3, NUM1);
	else if (NUM2==NUM3 && NUM2<NUM1)
	   printf("O maior número é %f, o segundo e terceiro número são iguais (%f).", NUM1, NUM2);
	else if (NUM2==NUM3 && NUM2>NUM1)
	   printf("O menor número é %f, o segundo e terceiro número são iguais (%f).", NUM1, NUM2);
	else if (NUM3==NUM1 && NUM3<NUM2)
	   printf("O maior número é %f, o primeiro e terceiro número são iguais (%f).", NUM2, NUM3);
	else if (NUM3==NUM1 && NUM3>NUM2)
	   printf("O menor número é %f, o primeiro e terceiro número são iguais (%f).", NUM2, NUM3);
	else if (NUM1==NUM2 && NUM2==NUM3)
	   printf("Todos os números são iguais");
	getch();
	return 0;
}
