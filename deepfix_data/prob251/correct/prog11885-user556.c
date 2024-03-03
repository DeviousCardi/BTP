#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m)
{int count=0;
   if (x==0) count=0;
  if(x<3||m==1) {
 count =1;return count; }
  else  if(m==2) {
      count+=(x/3)+1;return count; }
 else if(m==3)
  {  count+=getways(x%5,2);
     for(int i=1;i<x/5;i++) {
        count+= getways(x%5+i*5,2); }
   return count; } }
int main() {
    int n;
    scanf("%d",&n);
   int  count=getways(n,3)+getways(n,2);
    printf("%d",count);
    return 0; }