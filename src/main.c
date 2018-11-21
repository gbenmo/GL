//  Copyright (c) 2018 Antoine Tran Tan
//

#include <stdlib.h>
int main(void)
{
	  unsigned char bin [10] = {230, 120, 200, 50, 86, 127, 254, 21 , 89, 2};
	  int SEUIL = 150;
	  int i, i2 , i3 ;
	  int SEUILH=200,SEUILB=-100;
	  int sat[10]={1,1,1,1,1,1,1,1,1,1} ;
	  unsigned char dist [10] = {10, 20, 35, 50, 86, 127, 180, 197 , 220, 242};  
	  
	  for ( i=0; i < 10; i++) // On utilise la boucle for pour i allant de 0 à 10
		  
	  {
		    if ( bin[i] > SEUIL) // Si la variable est superieur a 150 
			{
		  bin[i] = 1;  // On affiche 1
			}
			
			else  
			{
				bin[i]=0; // Sinon 0
			}
			
	  }
			
			for( i2=0;i2<10;i2++)
				
				
	{
		sat[i2]=(rand()%400)-150; // On choisie un nombre aléatoire entre -150 et 249
		
		if(sat[i2]>SEUILH) // Si le nombre est supérieur a 200
			
		{
			sat[i2]=SEUILH; // Le nombre devient égale a 200
		}
		
		else if(sat[i2]<SEUILB)  
			
		{
			sat[i2]=SEUILB; // Si inférieur a -100 , il devient -100
		}
		  // On ne change pas les valeurs comprises dans l'intervalle [-100;200]
 
	  }
	  
	  for( i3=9;i3>0;i3=i3-1 )  // On initialise i3 a 9 pour commencer par la dernière valeur du tableau 
      // On indique i3 superieur a 0 car la première valeur est inchangée	  
	  // Et on soustrait a la valeur de i3, pour aller de 9 à 1.	  
		  {
		  
		    dist[i3] = dist[i3] - dist [i3-1]  ; // On soustrait la valeur dist[i3] a sa valeur précédente dist [i3-1]
		    // Pour obtenir l'écart entre ces deux valeurs sans remplacer la suivante.
			
			}
	 
		  
		  
		  
		  
			   
	  
	 return 0;
    
}

