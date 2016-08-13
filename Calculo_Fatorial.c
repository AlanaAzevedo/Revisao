#include <stdio.h>

int main (void)
{
	unsigned int i=0, n=0, resultado;
	
	printf("Entre com um numero (inteiro positivo): ");
	scanf("%d", &n);
	
	for (i=0; i<n; i++)
	{
		resultado = resultado * (n-i);
	}
	
	printf("\nO resultado eh %d!", resultado);
}
