#include <stdio.h>
int main() {
    int n,count=0;
    scanf("%d",&n);
    int peak[n];
    for (int i=0;i<=n;i++)
    scanf("%d",&peak[i]);
    for (int i=0;i<=n;i++) {
        if (peak[i+1]>=peak[i]&&peak[i+1]>=peak[i+2])
        count++; }
    printf("%d",count);
    return 0; }