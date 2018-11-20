//  Copyright (c) 2018 Antoine Tran Tan
//

#include "my_header.h"

int main(void)
{
	  unsigned char bin [10] = {230, 120, 200, 50, 86, 127, 254, 21 , 89, 2};
	  int SEUIL = 150;
	  int i=0;
	  
	  for ( i=0; i < 10; i++)
		  
	  {
		    if ( bin[i] > SEUIL)
			{
		  bin[i] = 1;
			}
			
			else
			{
				bin[i]=0;
			}
		  
 
	  }
			   
	  
	 return 0;
    
}
