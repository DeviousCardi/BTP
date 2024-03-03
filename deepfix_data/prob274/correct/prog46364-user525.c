#include <stdio.h>
int main(){
    int n;
    int i;
    int t=1,k;
    int j;
    scanf("%d\n",&n);
    int a[n];
    for(i=1;i<=n;i++)
    scanf("%d",&a[i]);
    int ar[n];
    ar[1]=a[2];
    for(i=1;i<=n;i++) {
        ar[i+1]=a[a[i]]; }
    for(i=1;i<=n;i++)
    {   t=t+1;k=0;
        for(j=i+1;j<=n;j++) {
            k=k+1;
            if(ar[j]==ar[i]) {
            break; } }
        if(j!=n)
        break; }
    printf("%d %d",t,k);
    return 0; }