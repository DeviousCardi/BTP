#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int n,int y) {
    if(y==2)
    {long x=n%3+n%5;
        return x; }
    if(y==3) {
        long count=0,i,j,k;
         for(i=1;i<n;i++)
        for(j=1;j<=n%3;j++)
        for(k=1;k<=n%5;k++)
        if((1*i+3*j+5*k)==n)
        count++;
        return count; } }
int main() {
    int n;
    long ways=0;
    scanf("%d",&n);
    ways=getways(n,2)+getways(n,3);
    printf("%d",ways+1); }