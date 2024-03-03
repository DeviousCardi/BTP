#include <stdio.h>
int main() {
  int a,b,c;
  int s,p;
  float m;
  scanf("%d%d%d",&a,&b,&c);
  s=a+b+c;
  p=a*b*c;
  m=(a+b+c)/3;
  printf("%d\n%d",s,p);
  printf("\n%.3f",m);
	return 0; }