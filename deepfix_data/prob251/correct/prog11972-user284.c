#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m) {
     if(x==1)
     return 1;
     if(x==3&&m==3)
     return 1;
     if(x==3&&m==3)
     return 2;
     if(x==5&&m==3)
     return 1;
     if(x==5&&m==3)
     return 2;
     if(x==5&&m==3)
     return 3;
     if(m==1)
     return 1;
     if(m==2)
     return getways(x-1,m)+getways(x-3,m);
     if(m==3)
     return getways(x-1,m)+getways(x-3,m)+getways(x-5,m); }
int main() {
    int n;
    scanf("%d",&n);
    printf("%d",getways(n,3));
    return 0; }