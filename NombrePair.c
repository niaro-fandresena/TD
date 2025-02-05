#include <stdio.h>

int main ()
{
  int N, compteur;
  printf ("Entrez un entier\n");
  scanf ("%d", &N );
  printf ("Les nombres pairs entre 0 et %d sont:\n", N);
  for (compteur = 2 ; compteur <= N ; compteur += 2 )
  {
    printf ("%d ", compteur);
  }
  printf ("\n");
return (0);
}
