#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int i;
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d ",&a[i]);
    for(i=0;i<n;i++)
    printf("%d",a[i]);
    return 0; }