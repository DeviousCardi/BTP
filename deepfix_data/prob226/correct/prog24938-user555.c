#include <stdio.h>
int main() {
    int d,n,i,j;
    scanf("%d %d",&d,&n);
    int b[d],a[n+1];
    for(i=0;i<d;i++)
        scanf("%d",&b[i]);
    for(i=0;i<=n;i++) {
        if(i<d)
            a[i]=b[i];
        else {
            a[i]=a[i-1];
            for(j=2;j<=d;j++)
                a[i]+=a[i-j]; } }
    printf("%d",a[n]);
    return 0; }