#include <stdio.h>
int main() {
    float x,y,z,p,q,r,G,H,I,median;
    scanf("%f%f%f\n %f%f%f", &x, &y, &z, &p, &q,&r);
  G = (x*40)/50 + (p*60)/100;
  H = (y*40)/50 + (q*60)/100;
  I = (z*40)/50 + (r*60)/100;
  if ( G<H  && H < I){ median = H;}
  else if ( G< I&& I <H) {median = I;}
  else {median = G;}
  printf("%0.2f",median);
  return 0; }