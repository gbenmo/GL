/***********************************************
*                                              *
*                TP_lib_suite                    *
*                                              *
************************************************
Auteurs : S. Moutault, Ag. Priou
Version : nov 2011   
Fichier : TP_lib_suite.c
************************************************
***********************************************/
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <math.h>

/*-------------------------  LOTO ---------------------------------*/

static int tableLoto[50];

void initialiserTirage(void)
{
  static int premierAppel = 1;
  int i;
  
  if (premierAppel)
  {
    srand(time(0));
    premierAppel = 0;
  }
  for (i = 0; i < 50; i++)
    tableLoto[i] = 0;
}

short tirerNumero(void)
{
  short n;
  int i = 0;
  
  n = rand() % 49 + 1;
  while (tableLoto[n] == 1 && i < 50)
  {
    n = (n + 1) % 49;
    if (n == 0)
      n = 49;
    i++;
  }
  if (i == 50)
    n = -1;
  else
    tableLoto[n] = 1;
  return n;
}

