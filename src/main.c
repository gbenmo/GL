#include <stdlib.h>


void main (void)		   // Déclaration des suites et variables
{
	unsigned short int S1 = 0; 
	
	unsigned long int S2 = 0;
	
	unsigned short int S3 = 0;
	
	unsigned short int S4 = 0;
	
	unsigned char n = 1  ;
	
	int i = 0 ;

	int u = 1; 

	int k = 1; 
	 
	int nb_rand;
	
	
	
	
					
	  while ( S1 < 360 )	// Calcul des premiers termes des multiples 3.
		  
	{
		
	 S1 = S1 + 3*n ;
		 						
	 n = n + 1 ;
		 
	}
	
	n = 0; 
	
	while ( 3*n < 9876 )	   // Calcul des multiples de 3 inférieur a 9876.
		  
	{
		
	 S2 = S2 + n ;
		 						
	 n = n + 1 ;
		 
	}
	
	while ( i < 12 )   // on effectue la boucle pour 12 valeurs.
		
	{
		nb_rand = (rand()%10)+1; // On utlise modulo pour obtenir un nombre entre 0 et 10 ,car 11 exlcue !  
		
		S3 = S3 + nb_rand ;
		
		i++; 
	
	}

	while ( u <= 20)

	{
		if ( k%3==0 || k%7==0 )
		
		{

			S4 = S4 + k;
			u++;
		}

		k++;

		}
	}
	
	