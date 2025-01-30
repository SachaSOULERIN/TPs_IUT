#include <iostream>
#include <stdio.h>
#include <string>

int main(void)
{
  float PRIX, MONTANT, ARENDRE, tempo_calc;
  int nbr_p2e, nbr_p1e, nbr_p50c;

  std::cout<<"fixer le prix (€) : ";
  std::cin>>PRIX;
  std::cout<<"fixer le montant versé (€) : ";
  std::cin>>MONTANT;

  ARENDRE = MONTANT-PRIX;
  std::cout<<"il faut rendre "<<ARENDRE<<" €, soit :"<<std::endl;

  nbr_p2e = int(ARENDRE)/2;
  if ((int(ARENDRE)%2)==0)
  {
    nbr_p1e = 0;
  }
  else
  {
    nbr_p1e = int(ARENDRE)%2;
  }

  //pour déterminer si 50cent. sont à rendre
  tempo_calc = ARENDRE - (2*nbr_p2e+1*nbr_p1e);
  if (tempo_calc==0)
  {
    nbr_p50c = 0;
  }
  else
  {
    nbr_p50c = 1;
  }
  std::cout<<nbr_p2e<<" piece(s) de 2€,"<<std::endl;
  std::cout<<nbr_p1e<<" piece(s) de 1€,"<<std::endl;
  std::cout<<nbr_p50c<<" piece(s) de 0.5€,"<<std::endl;

  return 0;
}
