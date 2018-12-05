
//  Copyright (c) 2018 Antoine Tran Tan
//

#include "my_header.h"
#include <ansi_c.h>

int main(void)
{
	
	 char ligne1[80] = "Nom: pentagone_B";
	 
	 char ligne2[80] = "Nb points: 5";
	 
	 char ligne3[80] = "Cordonnees: 10 20 30 20 30 40 43 53 35 65";
	 
	 
	 
	
	 
	 char x [80] ;
	 
	 char y[80];
	 
	 char nom_fig [80];
	 
	 char nb_pts [80];
	 
	 char message [80];  
	
	sscanf ( ligne1 ,"%*s %s", nom_fig );  
	
	sscanf ( ligne2 ,"%*s %*s %s", nb_pts ); 
	
	sscanf(  ligne3 ,"%*s %s %*s %s %*s %s %*s %s %*s %s %*s",x); 
	
	sscanf(  ligne3 ,"%*s %*s %s %*s %s %*s %s %*s %s %*s %s",y); 

	
	
	sprintf (message, "La figure %s possede %s sommets");
	
	printf("%s", message);
	


	
	
	
    return 0;
}

