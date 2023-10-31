#include <stdio.h>
#include <assert.h>

int main(void) {

  int h , m;
  scanf("%d %d", &h, &m);
  assert(1<=h && h<=12);
  assert(0<=m && m<=59);

  double hh , mh , angle;
  hh = 360/12*h + (float)360/12/60*m;
  mh = 360/60*m;

  if(hh > mh)
    angle = hh - mh;
  else
    angle = mh - hh;

  if(angle > 180)
    angle = 360 - angle;
  assert(0<=angle && angle<=180);

  printf("%.3f",angle);

  return 0;
}
