//  Copyright (c) 2018 Antoine Tran Tan
//

#include <stdlib.h>
#include "my_header.h"
#define SEUIL =150; 
#define SEUILH =200; 
#define SEUILB =100; 

int main(void)
{
	  unsigned char bin [10] = {230, 120, 200, 50, 86, 127, 254, 21 , 89, 2};
	  int i, i2 , i3 , i4, i5;
	  int sat[10]={1,1,1,1,1,1,1,1,1,1} ;
	  unsigned char dist [10] = {10, 20, 35, 50, 86, 127, 180, 197 , 220, 242}; 
	  int a[5]={10,4,6,7,8};
	  int b[5]={1,1,1,1,1};
	  int miroir[6]={5,10,20};
	  

	  // PARTIE 1



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
			



	  // PARTIE 2




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
	  



		// PARTIE 3






	  for( i3=9;i3>0;i3=i3-1 )  // On initialise i3 a 9 pour commencer par la dernière valeur du tableau 
                            	// On indique i3 superieur a 0 car la première valeur est inchangée	  
								// Et on soustrait 1 a la valeur de i3, pour aller dans le sens de 9 à 1.	  
		  {
		  
		    dist[i3] = dist[i3] - dist [i3-1]  ; // On soustrait la valeur dist[i3] a sa valeur précédente dist [i3-1]
		                                        // Pour obtenir l'écart entre ces deux valeurs sans remplacer la suivante.
			
			}
			




		// PARTIE 4 




	  for(i4=0;i4<5;i4++)
	{
		b[i4]=a[4-i4]; // Exemple si i4 = 0 ; On a b[0] = a [4] , 
		               // On obtient bien un tableau avec les valeurs dans l'ordre inversé
	}





		// PARTIE 5
	 
		  
		  
		 for(i5=0;i5<3;i5++)   // On note i5<3 , car nous avons seulement 3 valeurs 
	{
		miroir[i5+6/2]=miroir[-i5 + 6/2 -1]; // Sachant que 3 est un constante le tableau sera remplis de 3 à 5 avec le terme gauche de l'égalité
		                                     // Le terme de droit lui indique les valeurs de "miror" de 2 a 0 qu'il doit prendre
								             // Exemple si i5 = 1 , miroir[4] = miroir[1] , nous avons donc bien présence de l'effet "miroir"
	}
		  
			   
	  
	 return 0;
    
}



       // Bonne Correction ! 
