#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m) {
    if((x==5)&&(m==3))
    return 1;
    if((x==3)&&(m==2))
    return 1;
    if(x==0)
    return 1;
    if((2*m-1)>x)
    return 0;
    else {
        if(m==3)
        return(getways(x-5,3)+getways(x-5,2)+getways(x-5,1));
        else
        if(m==2)
        return(getways(x-3,2)+getways(x-3,1));
        else
        return 1; } }
int main() {
    int i,n,x=0;
    scanf("%d",&n);
    for(i=3;i>=1;i--) {
        x=x+getways(n,i); }
    printf("%d",x);
    return 0; }