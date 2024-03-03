#include <stdio.h>
int main(){
  int x1,x2,y1,y2;
  float slope;
  float a,b,c d;
  scanf("%d %d",&x1,&y1);
  scanf("%d %d",&x2,&y2);
  if(x1==x2) {
      printf("inf");
      return(0); }
  a=x1;
  b=x2;
  c=y1;
  d=y2;
  slope=(d-c)/(b-a);
  printf("%.2f",slope);
  return (0); }