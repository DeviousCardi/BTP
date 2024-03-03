#include <stdio.h>
#include <stdlib.h>
int main() {
        int i,t,n,a[20],b[20];
        scanf("%d",&n);
        for(i=0;i<n;i++) {
           scanf("%d",& a[i]); }
            if(a[i]>a[i-1]&&a[i]>a[i+1]) {
                printf("Yes\n"); }
        else {
                printf("No\n"); }
        return 0; }