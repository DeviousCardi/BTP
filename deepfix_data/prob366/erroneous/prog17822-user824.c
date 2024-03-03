#include <stdio.h>
int main(){
    int n,a[400],min=400;
    scanf("%d",&n);
    for(i=1;i<=2*n;i++)
    scanf("%d",&a[i]);
    for(i=1;i<=2*n;i++)
    { int cnt=1;
        for(j=i+1;j<=2*n;i++)
        if(a[i]!=a[j])
        cnt++;
        if(min>cnt)
        min=cnt; }
    printf("%d",min);
    return 0; }