//  Copyright (c) 2018 Antoine Tran Tan
//

#include "my_header.h"
#include "TP_lib_suite.h"

int main(void)
{
	
	 short joueur [6] = { 25,45,10,6,3,8};
	 short gagnant [6];
	 short score[100];
	 short i , j ,x , w ,valide=0 ;

	  for(w=0;w<100;w++)
		  
	  {
		   
		  initialiserTirage(); 
		  

	for(x=0;x<6;x++)
		
	{
		gagnant[x]=tirerNumero();
		
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
	 
	 score[w]=valide;
	 
	  }
    return 0;
}

