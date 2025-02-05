#include <stdio.h>

int main ()
{
	//Cet algorithme affiche la moyenne de deux notes.
	float note1, note2, moyenne;
	printf ("Entrez la note 1: \n");
	scanf ("%f", &note1 );
	printf ("Entrez la note 2: \n");
	scanf ("%f", &note2 );
	moyenne = ( note1 + note2 )/2;
	printf ("La moyenne des deux notes est: %f ", moyenne );
	return ( 0);
}
