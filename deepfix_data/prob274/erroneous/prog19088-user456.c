#include <stdio.h>
int main(){
    int n,z[n],l[n+1],t,k;
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
    scanf("%d ",&z[i]);
    for(j=0;j<n;j++)
    l[j+1]=z[j];
    printf("%d %d",n-1,n-2);
    return 0; }