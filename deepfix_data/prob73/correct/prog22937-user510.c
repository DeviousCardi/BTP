#include <stdio.h>
int main() {
    int n;
    int m;
    int a[10000];
    int sum=0;
    int i;
    int j;
    int max= -1;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++) {
    for(j=0;j<m;j++)
    {scanf("%d",&a[i*m+j]);
    sum=sum+a[i*m+j];}
    if (sum>max)
    max=sum; }
    printf("%d",max);
    return 0; }