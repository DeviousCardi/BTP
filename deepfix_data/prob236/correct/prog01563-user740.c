#include <stdio.h>
int main() {
    int a[100];
    int b[100];
    int final[100];
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    scanf("%d",&b[i]);
    for(i=0;i<n;i++)
    final[i]=a[b[i]];
    for(i=0;i<n;i++)
    printf("%d",final[i]);
    printf("end");
    return 0; }