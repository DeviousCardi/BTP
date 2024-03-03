#include <stdio.h>
int main() {
    int n,d;
    scanf("%d\n",&n);
    int num[n];
    int i=0;
    for(i=0;i<n;i++) scanf("%d",&num[i]);
    scanf("\n%d",&d);
    i=0;
    for(i=0;i<n;i++) printf("%d ",num[(i+d)%n-1]);
    return 0; }