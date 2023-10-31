#include <stdio.h>

int main(void) {

  int time , salary;
  double total;

  scanf("%d%d",&time,&salary);

  if(time<=60)
    total = time * salary;
  else if(time<=120)
    total = 60 * salary + (time-60) * salary * 1.33;
  else
    total = 60 * salary + 60 * salary * 1.33 + (time-120) * salary *1.66;

  printf("%.1f",total);

  return 0;
}
