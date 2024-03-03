#include<stdio.h>
int main() {
    int n,i,peak=0;
    int a[100];
        scanf("%d",&n);
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        for(i=1;i<n-1;i++) {
                if((a[i]>a[i-1])&&(a[i]>a[i+1]))
                    peak+=1; }
        printf("%d",peak);
    return 0; }