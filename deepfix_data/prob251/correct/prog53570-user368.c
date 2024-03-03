#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m) {
    if(x<=0){return 0;}
    if(x==0){return 1;}
    if(x==1&&m==1){return 1;}
    printf("%d %d",x,m);
    return(getways(x,m-1)+getways(x-(2*m-1),m)); }
int main() {
    int a;
    scanf("%d",&a);
    printf("%d",getways(a,1));
    return 0; }