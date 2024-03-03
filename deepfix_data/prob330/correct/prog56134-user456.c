#include <stdio.h>
int main(){
    int n,i=0,x,peaks=0;
    int na[i];
    scanf("%d",&n);
    for(i;i<n;i++);
    scanf("%d",&na[i]);
    for(x=1;x<(n-1);x++)
    {if (na[x]>na[x-1]&&na[x]>na[x+1])
    peaks=peaks+1;};
    printf("%d",peaks);
    return 0; }