#include<stdio.h>
#include<conio.h>
#include<locale.h>

/*1)- Faça um algoritmo que mostre a soma e o produto das raízes da equação 
( x + 1 )! = x ! + 6x.*/

int r1=1;

int fat(int x)
{
	int fato=1,i;
	for(i=1;i<=x;i++)
	{
		fato=fato*i;
	}
	return fato;
}

int CP1(int a)
{
	int result1;
	a++;
	result1= fat(a);
	return result1;
}

int CP2(int fa,int n)
{
	int result2;
	result2=fa + 6*n;
	return result2;
}

int soma()
{
	int so;
	so= r1+0;
	return so;
}

int prod()
{
	int pr;
	pr= r1*0;
	return pr;
}
int main()
{
	setlocale(LC_ALL, "Portuguese");
	int flag=0,P1,P2,fx,s,p;
	printf("===========\n  Lista 1  \n===========\n\n1)- Faça um algoritmo que mostre a soma e o produto das raízes da equação \n( x + 1 )! = x ! + 6x."); 	
	while(flag!=1)
	{
		fx= fat(r1);
		P1= CP1(r1);
		P2= CP2(fx,r1);
		if(P1==P2)
		{
			flag=1;
		}
		else
		{
			r1++;
		}
    }	

	s= soma();
	p= prod();
	
	printf("\n\nResolução:\nA soma resulta em = %d\nO produto resulta em= %d",s,p);
	return 0;
}
