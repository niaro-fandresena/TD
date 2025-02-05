#include <stdio.h>

int main ()
{
  int N, compteur, M = 1;
  printf ("Entrez un entier:\n");
  scanf ("%d", &N);
  for (compteur = 1; compteur <= N; compteur++)
  {
    M = M * compteur;
  }
  printf ("La multiplication 1 x 2 x ... x %d vaut %d\n", N, M);
return (0);
}
