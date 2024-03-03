#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n+1];
    int i,j=0;
    int t;
    a[0]=1;
    for (i=1;i<n+1;i++) {
        scanf("%d",&a[i]); }
    for (i=1;i<=n;i++) {
        for (j=2;j<=n;j++) {
            if (a[i]==a[j])
            {t=i+1;break;} } }
    printf("%d ",t);
    return 0; }