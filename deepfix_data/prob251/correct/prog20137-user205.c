#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m){
    if(x==0)    return 1;
    if(x<0)    return 0;
    if(m==1)
    return getways(x-1,1);
    else if(m==2)
        return  getways(x-3,2)+(x-1,1);
    else if(m==3)
        return getways(x-5,3)+getways(x-3,2)+getways(x-1,1); }
int main(){
    int n, i;
    scanf("%d", &n);
    long ans = getways(n, 3);
    printf("%ld", ans);
    return 0; }