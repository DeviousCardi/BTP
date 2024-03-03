#include <stdio.h>
int main() {
    int n,i,k,j,t,l;
    t=0;k=0;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<=n-1;i++)
    scanf("%d",&a[i]);
    b[0]=1;
    for(i=1;i<=2*n-1;i++)
    b[i]=a[b[i-1]-1];
    j=0,l=1;
    while(b[j]!=b[j+l]) {
        for(l=1;l<=n;l++)
        if(b[j]==b[j+l])
        {break;
        break;}
        j++;
        l=1; }
    t=j+l-1;
    k=l;
    printf("%d %d",t,k);
    return 0; }