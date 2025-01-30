#include <iostream>
#include <stdio.h>
#include <string>

int main(void)
{
  int annee_ref, reste, jour_ref, decalage, annee, annees_ecoul,
  jour, deltan, nbr_bis;
  annee_ref = 1900;
  std::cout<<"Quelle annee interresse ? -> ";
  std::cin>>annee;
  deltan = annee - annee_ref;
  nbr_bis = deltan/4;
  jour_ref = 2;
  decalage = jour_ref + deltan + nbr_bis;
  reste = 365%7;
  //std::cout<<"reste de 365/7 ="<<reste<<std::endl;
  jour = decalage%7;
  std::cout<<"en "<<annee<<", Noel tombe un "<<jour<<std::endl;

  return 0;
}
