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
    for(j=0;j<m;J++)
    {scanf("%d",&a[i*m+j]);
    sum=sum+a[i*m+j];}
    if (sum>max)
    max=sum; }
    printf("max");
    return 0; }