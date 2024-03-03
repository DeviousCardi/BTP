#include <stdio.h>
int main() {
    int n;
    scanf("%d\n",&n);
    int a[n+1];
    a[0]=1;
    int i;
    int count=0;
    for(i=1;i<n+1;i++) {
        scanf("%d ",&a[i]); }
    for(i=0;i<n+1;i++) {
        for(j=0;j<n+1;j++) {
            if(a[i]==a[j])
            count++ } }
    printf("%d",i-count+1);
    printf("%d",i-count);
    return 0; }