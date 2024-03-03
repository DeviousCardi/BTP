#include <stdio.h>
#define MAX 100
int main() {
    int a[MAX],i,sum=0;
    int k;
    int n;
    scanf("%d",&k);
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
        sum = sum + a[i];
        a[i] = sum;
        if(sum==k);
        printf("lucky"); }
    return 0; }