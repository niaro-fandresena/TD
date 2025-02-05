#include <stdio.h>

int main ()
{
  int N, compteur, Somme = 0;
  printf ("Entrez un entier: \n");
  scanf ("%d", &N);
  for (compteur = 1; compteur <= N; compteur++)
  {
    Somme = Somme + compteur;
  }
  printf ("La somme 1 + 2 + ... + %d vaut %d\n", N, Somme );
return (0);
}
