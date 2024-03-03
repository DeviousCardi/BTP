#include <stdio.h>
int main() {
    int n,x,t=0,k=0;
    int a[1000];
    scanf("%d",&n);
    a[0]=0;
    for(int i=1;i<n+1;i++) {
        scanf("%d",&a[i]); }
    for(int i=1;i<n+1;i++) {
        t=1;
        x=a[i];
        for(int j=a[i];j<n+1;j=a[j]) {
            t++;
            if(x==a[j]) {
                break; } } }
    printf("%d",t);
    return 0; }