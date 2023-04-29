#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	float SB, HR, IR1, IR2, EN1, EN2, VH, ADIC, SL1, SL2, SL3, SL4, SL5;
	printf("Digite o salário bruto:");
	scanf("%f", &SB);
	printf("Digite as horas trabalhadas no mês:");
	scanf("%f", &HR);
	IR1= SB*0.08;
	IR2= SB*0.15;
	EN1= SB*0.05;
	EN2= SB*0.07;
	VH= SB/160;
	ADIC= (VH+(VH*0,5))*(HR-160);
	SL1= ADIC+SB;
	SL2= SB-IR1-EN1;
	SL3= ADIC+SL2;
	SL4= SB-IR2-EN2;
	SL5= ADIC+SL4;
	if ((SB < 800.00) && (HR <= 160))
	 printf("O salário líquido é %.2f", SB);
    else if ((SB < 800.00) && (HR > 160))
	 printf("O salário líquido é %.2f", SL1);
	else if ((SB >= 800.00) && (SB <= 1600.00) && (HR > 160))
	 printf("O salário líquido é %.2f", SL3);
	else if ((SB >= 800.00) && (SB <= 1600.00) && (HR <= 160))
	 printf("O salário líquido é %.2f", SL2);
	else if ((SB > 1600.00) && (HR > 160))
	 printf("O salário líquido é %.2f", SL5);
	else if ((SB > 1600.00) && (HR <= 160))
	 printf("O salário líquido é %.2f", SL4);
	getch();
	return 0;
}
