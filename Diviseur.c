#include <stdio.h>

int main ()
{
  int N, d;
  printf ("Entrez un entier:\n");
  scanf ("%d", &N) ;
  printf ("Les diviseurs de %d sont: 1, ", N);
  for (d = 2 ; d < N ; d++)
  {
    if ( N % d == 0 )
    {
    printf ("%d, ", d );
    }
  }
  printf ("%d ", N );
return (0);
}
