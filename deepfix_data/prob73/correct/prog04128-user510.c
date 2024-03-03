#include <stdio.h>
int main() {
    int n;
    int m;
    int a;
    int sum=0;
    int i;
    int j;
    int max= -1;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++) {
    for(j=0;j<m;j++)
    {scanf("%d",&a);
    sum=sum+a; }
    if (sum>max)
    max=sum;
    sum=0; }
    printf("%d",max);
    return 0; }