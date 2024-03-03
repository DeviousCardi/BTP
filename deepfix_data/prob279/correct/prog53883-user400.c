#include <stdio.h>
int main() {
    int n,i,j,x,y,count;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d",&n); }
    for(i=0;i<n;i++) {
        x=a[i];
        for(j=0;j<n;j++) {
            if(x==a[j])
            count=count+1; } }
    if(count==2)
    printf("%d",x);
    return 0; }