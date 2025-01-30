#include <iostream>
#include <stdio.h>
#include <string>

int main(void)
{
  int sec, heure, min;
  std::cout<<"nombre entier de secondes : ";
  std::cin>>sec;
  min = sec/60;
  sec = sec%60;
  heure = min/60;
  min = min%60;
  std::cout<<"cela fait "<<heure<<"h "<<min<<"m "<<sec<<"s"<<std::endl;
  

  return 0;
}
