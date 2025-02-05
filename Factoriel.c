#include <stdio.h>

int main ()
{
  int N, compteur, f = 1;
  printf ("Entrez un entier: ");
  scanf ("%d", &N );
  printf ("Le factoriel de %d est ", N);
  for (compteur = 1; compteur <= N; compteur++)
  {
    f = f * compteur;
  }
  printf ("%d\n", f);
return (0);
}
  
