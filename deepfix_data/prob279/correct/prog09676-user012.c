#include <stdio.h>
int main() {
    int n;
    scanf("%d\n",&n);
    int a[n+1];
    for(int i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    for(int i=0;i<n;i++) {
        for(int j=i;j<n;j++)
        if(a[i]==a[j]) {
            printf("%d ",a[i]); } }
    printf("\n");
    int t;
    for(int i=1;i<=n;i++) {
        t=0;
        for(int j=0;j<n;j++) {
            if(i==a[j])
            t=t+1; }
        if(t==0)
        printf("%d",i); }
    return 0; }