#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int n, int m,int y)
{   long  count=0,i, q=0;
    if(m==2)
    {   printf("<>");
        for(i=0;i<n;i++)
        {   if(y==1)
            break;
            if((1*i+(n-i)*3)==n)
            count++; }
        for(i=0;i<n;i++) {
            if((1*i+(n-i)*5)==n)
            count++; }
        for(i=0;i<=n;i++)
        {   if(y==1)
            break;
            if((1*3+(n-i)*5)==n)
            count++; }
        return count; }
    if(m==3) {
        for(i=1;i<=n;i++)
        q=q+getways((n-3*i),2,1);
        return q; } }
int main() {
    int n;
    scanf("%d",&n);
    long ways=0;
    ways=getways(n,2,0);
    ways=ways+getways(n,3,0);
    printf("%ld",ways);
    return 0; }