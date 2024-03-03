#include <stdio.h>
int main() {
int n,m,i,j;
scanf("%d %d",&n,&m);
int a[m+1];
int max=0;
for(i=0;i<n;i++)
{int sum=0;
    for(j=0;j<m;j++) {
        scanf("%d",&a[j]);
        sum=sum+a[j];
        if(sum>max) {
            max=sum; } }
}printf("%d",max);
    return 0; }