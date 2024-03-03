#include<stdio.h>
#include<limits.h>
int main()
{   int m,n,i,x,j,max,min=INT_MAX;
    scanf("%d %d",&n,&m);
    for(i=0;i<m;i++) {
        max=INT_MIN;
        for(j=0;j<n;j++) {
            scanf("%d",&x);
            if(x>=max) {
                maxi=x; } }
        min=max; }
    printf("%d",min);
    return 0; }