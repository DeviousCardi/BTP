#include <stdio.h>
int main(){
    int n,i,x,peaks=0;
    scanf("%d",&n);
    int na[n];
    for(i=0;i<n;i++);
    scanf("%d",&na[i]);
    for(x=1;x<n-1;x++)
    {if (na[x]>na[x-1]&&na[x]>na[x+1])
       {peaks=peaks+1;
           printf("%d",na[x]);} }
    printf("%d",peaks);
    return 0; }