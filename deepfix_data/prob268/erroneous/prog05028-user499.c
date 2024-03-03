#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m) {
    if(x<0)
     return 0;
    if(x==0||m==1)
     return 1;
    int i;
    long count=0;
    for(i=m,i<=1,i--) {
      count+=getways((x-((2*i)-1)),i); }
    return count; }
int main() {
    int n;
     scanf("%d",&n);
    long ways=getways(n,3)
     printf("%d",ways);
    return 0; }