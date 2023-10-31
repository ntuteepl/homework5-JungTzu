#include "stdio.h"
int main(void) {

  float c;
  double f;
  
  scanf("%f",&c);
  f = (c*9/5)+32;
  printf("%.1f",f);

  return 0;
}
