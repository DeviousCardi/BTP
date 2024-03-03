#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
int count=0;
long getways(int x, int m) {
 if(x<3||m==1)
 {return 1;}
    if(m==2) {
      count+=getways(x-3,2)+getways(x,1); } }
int main() {
    int n;
    scanf("%d",&n);
    long y=getways(n,2);
    printf("%d",count);
    printf("%ld",y);
    return 0; }