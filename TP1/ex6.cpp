#include <iostream>
#include <string>
#include <stdio.h>

int main(void)
{
  int h_deb, h_fin, min_deb, min_fin, tps_deb, tps_fin, duree_com,
  h_dur, min_dur;
  float prix_p_min, cout_tot;

  prix_p_min = 0.15;

  std::cout<<"heure debut com : ";
  std::cin>>h_deb;
  std::cout<<"minute debut com : ";
  std::cin>>min_deb;
  tps_deb = h_deb*60+min_deb;
  std::cout<<"heure fin com : ";
  std::cin>>h_fin;
  std::cout<<"minute fin com : ";
  std::cin>>min_fin;
  tps_fin = h_fin*60+min_fin;
  if (tps_fin<tps_deb)
  {
    std::cout<<"IMPOSSIBLE !!!!"<<std::endl;;
  }
  else
  {
    duree_com = tps_fin-tps_deb;
    min_dur = duree_com%60;
    h_dur = (duree_com-min_dur)/60;
    cout_tot = prix_p_min*duree_com;

    std::cout<<"la conv a duree :"<<h_dur<<"h:"<<min_dur<<"m"<<std::endl;
    std::cout<<"le cout est donc de "<<cout_tot<<"€ !"<<std::endl;
  }

  return 0;
}
