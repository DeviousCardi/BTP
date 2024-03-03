#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int num[n],d,i;
    for(i=0;i<n;i++)
       scanf("%d ",&num[i]);
    scanf("%d",&d);
    for(i=0;i<n;i++)
       num[i+d]=num[i];
    for(i=0;i<n;i++)
       printf("%d ",num[i]);
    return 0; }