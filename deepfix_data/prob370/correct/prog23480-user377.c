#include<stdio.h>
int main() {
  int a,b,c,max,min,mid;
  scanf("%d%d%d",&a,&b,&c);
  max=a;
  min=c;
  if(b>max)
  max=b;
  if(c>max)
  max=c;
  if(a<min)
  min=a;
  if(b<min)
  min=b;
  mid=a+b+c-max-min;
return 0; }