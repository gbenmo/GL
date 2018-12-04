
//  Copyright (c) 2018 Antoine Tran Tan
//

#include <ansi_c.h> 
#include <userint.h>

int main(void)
{
      char prenom [100];
	  char nom [100];
	  char age [100];
	  char Bienvenue [9] = " Bienvenue";
	  int a;
	  
	  
	  scanf ( "%s", prenom);
	  
	  scanf ( "%s", nom);
	  
	  scanf ( "%s", age);
	  
	  printf ( "Je m'apelle %s %s et j'ai %s ans", prenom,nom,age);
	  
	  
	  a= MessagePopup (Bienvenue ,phrase);
	  
	  getchar();
	  
	  
	  
	  
	  
	  
	  
}
