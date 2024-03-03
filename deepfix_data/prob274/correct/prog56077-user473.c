#include <stdio.h>
int main() {
    int n;
    scanf("%d\n",&n);
    int a[n+1];
    a[0]=1;
    int i,j;
    int count=0;
    for(i=1;i<n+1;i++) {
        scanf("%d ",&a[i]); }
    for(i=1;i<n+1;i++) {
        for(j=i+1;j<n+1;j++) {
            if(a[i]==a[j]) {
                count++; }
            if(a[i]==1) {
                count++; } } }
    printf("%d",count);
    printf("%d ",i-count);
    printf("%d",i-count);
    return 0; }