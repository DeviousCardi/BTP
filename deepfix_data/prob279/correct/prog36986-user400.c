#include <stdio.h>
int main() {
    int n,i,j,x,y;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d",&n); }
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            if(j==i)
            continue;
            if(a[i]==a[j])
            x=a[i]; } }
    printf("%d",x);
    return 0; }