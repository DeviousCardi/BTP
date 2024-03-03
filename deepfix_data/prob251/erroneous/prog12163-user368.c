#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m) {
    if(x<=0){return 0;}
    if(x==0){retrun 1;}
    if(x==1&&m==1){return 1;}
    for(int i=3;i>=1;i--){
        getways(x,m)+=getways(x-(2*i-1),i); } }
int main() {
    int a;
    scanf("%d",&a);
    printf("%d",getways(a,3));
    return 0; }