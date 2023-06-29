#include <stdio.h>

int main() {
  
  float p,r,t,SI;
  printf("Enter Principle");
  scanf("%f",&p);
  printf("Enter Rate");
  scanf("%f",&r);
  printf("Enter Time");
  scanf("%f",&t);
  SI=(float)(p*r*t)/100;
  printf("simple interst is=%.2f",SI);
  
  return 0;
}
