#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m) {
    int a,b,c,z;
    static int sum=0;
    a=x/5;
    b=(x-5*a)/3;
    c=(x-5*a-3*b);
    if(m==1) {
        z=1;
        sum=sum+z;
        return getways(x,m-1); }
    if(m==2) {
        if(a>=c)
        z=x/5+x/3+1;
        else
        z=x/5+x/3;
        sum=sum+z;
        return getways(x,m-1); }
    if(m==3)
    {if(a>0){
        if(b==0)
        z=(a-2)*5+1;
        else
        z=(a-1)*5+1; }
        sum=sum+z;
        return getways(x,m-1); }
    return sum; }
int main() {
    int x,i;
    scanf("%d",&x);
    i=getways(x,3);
    printf("%d",i);
    return 0; }