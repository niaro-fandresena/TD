#include <stdio.h>

int main ()
{
  int N, compteur;
  printf ("Entrez un entier\n");
  scanf ("%d", &N );
  printf ("Les valeurs entre 1 et %d sont:\n", N);
  for (compteur = 1 ; compteur <= N ; compteur++)
  {
    printf ("%d ", compteur );
  }
  printf ("\n");
return (0);
}
