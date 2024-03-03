#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,t,i,x;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    scanf("%d",&t);
    for(i=0;i<t;i++) {
        scanf("%d",&x);
        if(x==0) {
            if(a[0]>a[1])
            printf("Yes\n");
            else
            printf("No\n"); }
        else if(x==n-1) {
            if(a[n-1]>a[n-2])
            printf("Yes\n");
            else
            printf("No\n"); }
        else if(a[x]>a[x-1]&&a[x]>a[x+1])
        printf("Yes\n");
        else
        printf("No\n"); }
    return 0; }