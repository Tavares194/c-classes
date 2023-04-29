#include<stdio.h>
#include<conio.h>
#include<locale.h>

/*3)- Num pequeno país, as chapas dos automóveis têm duas letras distintas seguidas de 3 algarismos sem repetição.
 Considerando-se o alfabeto com 26 letras, qual o número de chapas possíveis de se firmar? 
 Faça um algoritmo que dê essa resposta.*/

main()
{
	int l1,l2,n1,n2,n3, c=0;
	setlocale(LC_ALL, "portuguese");
	printf("===========\n  Lista 1 \n===========\n\n3)- Num pequeno país, as chapas dos automóveis têm duas letras distintas seguidas de 3 algarismos sem repetição.\nConsiderando-se o alfabeto com 26 letras, qual o número de chapas possíveis de se firmar?\num algoritmo que dê essa resposta.");
	for(l1=26;l1>0;l1--)
	{
		for(l2=26;l2>0;l2--)
	    {
	    	for(n1=9;n1>=0;n1--)
	        {
	        	for(n2=9;n2>=0;n2--)
	            { 
	               for(n3=9;n3>=0;n3--)
	               {
	               	if (l1!=l2 && n1!=n2 && n1!=n3 && n2!=n3)
	               	{
	               		c++;
					}
					else{ }               	
	               }
	            }		
	        }
		  
	    }
	}
	
	printf("\n\n\nResposta: As combinações possiveis são %d\n\n",c);
	
	return 0;
}
