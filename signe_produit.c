#include <stdio.h>

int main ()
{
	int a, b;
	printf ("Veuillez saisir un nombre: \n");
	scanf ("%d", &a );
	printf ("Veuillez saisir un autre nombre \n");
	scanf ("%d", &b );
	if ( a < 0 )
	{
		if ( b < 0 )
		{
		printf (" %d x %d est negatif \n", a, b);
		}
		else
		{
		printf (" %d x %d est positf \n", a, b);
		}	
	}	
	else if ( b > 0 )
	{
	printf (" %d x %d est positif\n", a,b );
	}
	else 
	{
	printf (" %d x %d est negatif \n", a, b ); 
	}
	return (0);
}

