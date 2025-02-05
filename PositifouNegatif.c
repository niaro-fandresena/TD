#include <stdio.h>

int main ()
{
	int nombre;
	printf ("Veuillez saisir un nombre: \n");
	scanf ("%d", &nombre );
	if ( nombre > 0 )
	{
		printf ("Le nombre saisit est positif \n");
	}
	else
	{
		printf ("Le nombre saisit est negatif \n");
	}
	return (0);
}

	


