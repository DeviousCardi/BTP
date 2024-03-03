#include <stdio.h>
int main() {
    int n;
    scanf("%d\n",&n);
    int a[n],b[n],c[n];
    for(int i=0;i<n;i++)
    scanf("%d ",&a[i]);
    printf("\n");
    for(int i=0;i<n;i++)
    scanf("%d ",&b[i]);
    for(int i=0;i<n;i++)
    c[b[i]]=a[i];
    printf("\n");
    for(int i=0;i<n;i++)
    printf("%d ",c[i]);
    printf("end");
    return 0; }