#include <stdio.h>
#include <math.h>

int  main ()
{
	float a, b, c, x1, x2, x, delta, k, e, d;
	printf ("Veuillez saisir a: \n");
	scanf ("%f", &a );
	printf ("Veuillez saisir b: \n");
	scanf ("%f", &b );
	printf ("Veuillez saisir c: \n");
	scanf ("%f", &c );
	delta =( pow ( b , 2 ) - ( 4 * a * c ) );
	if ( a == 0 )
	{
		if ( b == 0 )
		{
			printf ("Pas de solution!\n");
		}
		else 
		{
			x = - c / b;
			printf ("La solution est %f. \n", x );
		}
	}
	else if ( delta == 0 )
	{
		x = - b / 2 * a;
	}
	else if ( delta < 0 )
	{
		k = sqrt ( - ( delta ) );
		e = (-b) / ( 2  * a ) ;
		d = k / ( 2 * a ) ;
		printf ("Les deux solutions complexes sont x1 = %.2f - %.2fi, et x2 = %.2f + %.2fi \n", e, d, e, d );
	}
	else
	{
		x1 = ( - b - sqrt ( delta ) ) / ( 2 * a );
		x2 = ( - b + sqrt ( delta ) ) / ( 2 * a );
		printf ("Les deux solutions sont x1 = %f et = %f \n", x1, x2 );
	}
	
	return ( 0 ) ;
}
