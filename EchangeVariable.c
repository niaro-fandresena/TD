#include <stdio.h>

int main ()
{
  int a, b, c;
  printf ("Entrez a: ");
  scanf ("%d",&a);
  printf ("Entrez b: ");
  scanf ("%d",&b);
  c = a;
  a = b;
  b = c;
  printf ("Les nouveaux valeurs des variables sont a = %d, b = %d\n",a,b);
return (0);
}
