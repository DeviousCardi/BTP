#include <stdio.h>
int main(){
    int n,i,j,a[100];
    int t=0;
    scanf("%d",&n);
    if(2<=n&&n<=100)
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<n;i++) {
        for(j=i+1;j<n;j++) {
            if(a[i]!=a[j])
            s=s+1;
            else break; } }
    printf("%d",s+1);
    return 0; }