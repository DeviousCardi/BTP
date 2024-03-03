#include <stdio.h>
int main(){
    int n,a[400],i,j,min=400;
    scanf("%d",&n);
    for(i=1;i<=2*n;i++)
    scanf("%d",&a[i]);
    for(i=1;i<=n;i++)
    { int cnt=1;
        for(j=i+1;j<=2*n;j++)
        if(a[i]!=a[j])
        cnt++;
        if(min>cnt)
        min=cnt; }
    printf("%d",min);
    return 0; }