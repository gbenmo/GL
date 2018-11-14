#include "TP_lib.h"

void main (void)
{
	
	unsigned short int points = 0;  // Déclaration des variables points et resultat.   
	
	unsigned short int resultat= 0;
	
	 
	do						// Effectuer la boucle tant que la valeur obtenue est différente de 1. 
		
	{
		resultat = LancerDe ();
		
		
		 if ( resultat == 2 || resultat == 4 || resultat == 6)   // Si la valeur obtenue est 2 ,4 ou 6. 
		 {
			 
			 points = points + resultat; // On ajoute au point la valeur du dé obtenue.
			 
		 }
		 
		 else if ( resultat == 3)  // Si la valeur obtenue est 3.
			 
		 {
			 
			 points = points * 2 ;   // On double la valeur des points.
			 
		 }

		 else   // Sachant que tout les nombre sdu dés sont utiliser on tombera forcement sur 5 si cette condition est vraie .
			 
		 {
			 
		 points = points - 2 ; // On soustrait 2 points ( Sachant que points est Unsigned il ne sera pas inferieur à 0 ).
		 
		 }
	} 
	
	while (resultat != 1);
	
	
}
