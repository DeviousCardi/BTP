#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int n, int m,int y)
{   long  count=0,i,j, q=0;
    if(m==2) {
        for(i=0;i<n;i++)
        {   if(y==1)
            break;
            for(j=1;j<=n%3;j++)
            if((1*i+3*j)==n)
            count++; }
        for(i=0;i<n;i++)
        {    printf("%d>>",n);
            for(j=1;j<=n%5;j++)
            if((1*i+5*j)!=n)
           { count++; printf("%d %d\n",1*i+5*j,n); } }
        for(i=0;i<=n;i++)
        {   if(y==1)
            break;
            for(j=1;j<=n%3;j++)
            if((5*i+3*j)==n)
            count++; }
        return count; } }
int main() {
    int n;
    scanf("%d",&n);
    long ways=0;
    ways=getways(n,2,0);
    ways=ways+getways(n,3,0);
    printf("%ld",ways+1);
    return 0; }