 #include <stdio.h>

int main ()
{
	int a, b, c, max;
	printf ("Entrez a: \n");
	scanf ("%d", &a );
	printf ("Entrez b: \n");
	scanf ("%d", &b );
	printf ("Entrez c: \n");
	scanf ("%d", &c );
	if ( a > b )
	{
		if ( a > c )
		{
		max = a;
		}
		else 
		{
		max = c;
		}
	}
	else if ( b > a )
	{
		if ( b > c )
		{
		max = b;
		}
		else
		{ 
		max = c;
		}
	}
	printf ("Le maximum entre %d, %d et %d est %d. \n", a, b, c, max );
	return ( 0 );
}
