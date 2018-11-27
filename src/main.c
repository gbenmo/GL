//  Copyright (c) 2018 Antoine Tran Tan
//

#include "my_header.h"
#include "TP_lib_suite.h"

int main(void)
{
	
	 short joueur [6];
	 short gagnant [6];
	 unsigned char i , j ,x , y ,valide=0, tirage = 0, score=0 ;

	  while (tirage <100)
		  
	  {
		   
		  initialiserTirage(); 
		  

	for(x=0;x<6;x++)
		
	{
		gagnant[x]=tirerNumero();
		
	}
	
	 initialiserTirage();

	for(y=0;y<6;y++)
		
		
	{
		
		joueur[y]=tirerNumero();
		
	}
	
	
	for ( i=0 ;i<6; i++ )
		 
	 {
         for (j=0; j<6; j++)
			 
		 {
			 
		 if ( joueur [i] == gagnant [j] )
			 
		 {
			 valide++;
		 }
		 
        }
		 
     }
	 
	 score = valide; 
	 
	 tirage++; 
	 
	  }
			 
				 
	 

	
    return 0;
}

