#include "Operations.h"

int addition(int a, int b)
{
	int resultat;
	
	resultat = a + b;
	
	return resultat;
}

int soustraction(int a, int b)
{
	int resultat;
	
	resultat = a - b;
	
	return resultat;
}


int exposant(int nb, int exp)
{
  int resultat, x;
  
  resultat=nb;
  
  while(x<exp)
  {
    resultat=resultat*nb;
  }
  return resultat;
}


int factoriel(int nb)
{
  
}
