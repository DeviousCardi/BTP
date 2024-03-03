#include <stdio.h>
#define MAX 100
int main() {
    int a[MAX],i;
    int k;
    int n;
    scanf("%d",&k);
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",a[i]);
        printf("%d",a[i]); }
    return 0; }