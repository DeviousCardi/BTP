#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m) {
    if(x==0)
    return 1;
    if(m>x)
    return 0;
    else {
        if(m==3)
        return(getways(x-5,3)+getways(x-5,2)+getways(x-5,1));
        else
        if(m==2)
        return(getways(x-3,2)+getways(x-3,1));
        else
        return(getways(x-1,1)); } }
int main() {
    int i,n,x=0;
    scanf("%d",&n);
    for(i=1;i<=3;i++) {
        x=x+getways(n,i); }
    printf("%d",x);
    return 0; }