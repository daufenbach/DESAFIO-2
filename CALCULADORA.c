#include <stdio.h>


int main ()
{
	
		int op, A, B, SOM, SUB, DIV, MUL;
		
		printf ("Digite 1 para SOMAR \n");
		
		printf ("Digite 2 para SUBTRAIR \n");
		
		printf ("Digite 3 para MULTIPLICAR \n");
		
		printf ("Digite 4 para DIVIDIR \n");
				
		scanf("%i", &op);
		
		printf ("\n Digite o primeiro valor \n");
		
		scanf("%i", &A);
		
		printf ("\n Digite o segundo valor \n");

		scanf("%i", &B);

		if (op == 1)
		{
			SOM = (A+B);
			printf ("\n RESPOSTA: %i", SOM);
		}
		
		else
		{
			if (op == 2)
			{
				SUB = (A-B);
				printf ("\n RESPOSTA: %i", SUB);
			}
			else
			{
				if (op == 3)
				{
					MUL = (A*B);
					printf ("\n RESPOSTA: %i", MUL);
				}
				else
				{
					DIV = (A/B);
					printf ("\n RESPOSTA: %i", DIV);
					
				}
			}
		}	
		return 1;
}
