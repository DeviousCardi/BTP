#include <stdio.h>
int main() {
    int n,i,count=0;
    scanf("%d",&n);
    int a[n*n];
    for(i=0;i<n*n;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<n;i++) {
        if(a[(i*n)+i]==1) {
            int j=0;
            while(j<(i+1)*n && j!=((i*n)+i)) {
                if(a[j]==0)
                count=1;
                j++; } }
        else
        count=0; }
    printf("%d",count);
    return 0; }