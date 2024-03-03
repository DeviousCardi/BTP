#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n+1];
    int i,j=0;
    int t=3,k=2;
    a[0]=1;
    for (i=1;i<n+1;i++) {
        scanf("%d",&a[i]); }
    for (i=1;i<=n;i++) {
        for (j=1;j<=n;j++) {
            if (a[i]==a[j])
            break; } }
    return 0; }