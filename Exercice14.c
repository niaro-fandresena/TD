#include <stdio.h>

int main ()
{
  int N;
  float S = 0, d, compteur = 1;
  printf ("Entrez un entier: ");
  scanf ("%d", &N);
  while ( compteur <= N )
  {
    d = 1 / compteur;
    S = S + d; //cumul
    compteur++;
  }
  printf ("La somme des 1/1 + 1/2 + ... 1/%d vaut %.3f\n", N, S );
return (0);
}
