
  /*  OPERATIONS ARITHMETIQUES : ISEQUEA.C*/

#include<iostream>
#include<string>
//#include<conio.h>
//#include<math.h>

int main(void)
{
/*declar. des vars*/
  int a,b,c,x,y,z,u,v,w,m,n,p,q;
  float a1,b1,c1,v1,w1,m1,p1;
  long q2,d2;

  //init
  a=10;
  b=5;
  c=2;
  d2=25000;
  a1=10;
  b1=5;
  c1=2;

  //calculs
  x=a-b-c;
  y=a/b*c;
  z=a/b/c;
  u=(a-(b-c))/c;
  v=(a-(b-c))%c;
  v1=(a-(b-c))/c;
  q=d2*2;
  q2=d2*2;
  w1=(a1-(b1-c1))/c1;
  m=a1/c1;
  n=a1/3.0;
  m1=(a1+b1)/c;
  p=(a+b)/c1;
  p1=(a+b)/c1;

  /*aff. des resultats*/
  //printf("\nz: %d",z);
  std::cout<<"\nx: "<<x<<std::endl;
  //printf("\nx: %d",x);
  std::cout<<"\ny: "<<y<<std::endl;
  //printf("\ny: %d",y);
  std::cout<<"\nz: "<<z<<std::endl;
  //printf("\nu: %d",u);
  std::cout<<"\nu: "<<u<<std::endl;
  //printf("\nv: %d",v);
  std::cout<<"\nv: "<<v<<std::endl;
  //printf("\nv1: %6.2f",v1);
  std::cout<<"\nv1: "<<v1<<std::endl;
  //printf("\nq: %d",q);
  std::cout<<"\nq: "<<q<<std::endl;
  //printf("\nq2: %ld",q2);
  std::cout<<"\nq2: "<<q2<<std::endl;
  //printf("\nw1: %6.2f",w1);
  std::cout<<"\nw1: "<<w1<<std::endl;
  //printf("\nm: %d",m);
  std::cout<<"\nm: "<<m<<std::endl;
  //printf("\nn: %d",n);
  std::cout<<"\nn: "<<n<<std::endl;
  //printf("\nm1: %6.2f",m1);
  std::cout<<"\nm1: "<<m1<<std::endl;
  //printf("\np: %d",p);
  std::cout<<"\np: "<<p<<std::endl;
  //printf("\np1: %6.2f",p10);
  std::cout<<"\np1: "<<p1<<std::endl;

  //getch();
  return 0;
}
