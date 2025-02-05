#include <stdio.h>

int main ()
{
	float note1, note2, coef1, coef2, moyenne ;
	printf ("Entrez la note 1: \n");
	scanf ("%f", &note1 );
	printf ("Entrez son coefficient: \n");
	scanf ("%f", &coef1 );
	printf ("Entrez la note 2: \n");
	scanf ("%f", &note2 );
	printf ("Entrez son coefficient: \n");
	scanf ("%f", &coef2 );
	moyenne = ( note1 * coef1 + note2 * coef2 ) / ( coef1 + coef2 );
	printf ("La moyenne des deux notes est:%f. \n", moyenne );
} 
