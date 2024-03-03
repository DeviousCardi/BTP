#include <stdio.h>
int main() {
  int a,b,c;
  scanf("%d %d %d",&a,&b,&c);
  int s,p;
  float avg;
  s=a+b+c;
  p=a*b*c;
 avg=(a+b+c)/3;
 printf("%d\n%d\n%.3f",s,p,avg);
	return 0; }