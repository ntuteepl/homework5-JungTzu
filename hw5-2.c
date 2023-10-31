#include <stdio.h>

int main(void) {

  int min;
  double cost;

  scanf("%d", &min);
  
  if (min<=800)
    cost = min*0.9;
  else if (min<=1500)
    cost = min*0.9*0.9;
  else
    cost = min*0.9*0.79;
  
  printf("%.1f",cost);  

  return 0;
}
