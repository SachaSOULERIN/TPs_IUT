#include <stdio.h>
#include <iostream>
//#include <conio.h>
#include <string>

int main(void)
{
  char carac;
  //int val_car_ascii;
  //val_car_ascii = int(carac);
  int ascii;
  std::cout<<"saisir un unique caractere 'carac' : ";
  std::cin>>carac;
  std::cout<<"le caractere 'carac' est : "<<carac<<std::endl;

  std::cout<<"et sa valeur ASCII est : "<<int(carac)<<std::endl;

  if((int(carac)>96)&&(int(carac)<123))
  {
    ascii = int(carac)-32;

    std::cout<<"sa valeur en majuscule : "<<ascii<<std::endl;;
    std::cout<<"le caractère associé est : "<<char(ascii)<<std::endl;
  }

  return 0;
}
