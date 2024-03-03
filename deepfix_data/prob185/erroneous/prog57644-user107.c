#include <stdio.h>
int max(start,end,a[]) {
if(start==end)
return 0;
else {
for(i=start;i<end;i++)
{m=a[start]
    if(a[i]>m)
    m=a[i]; }
return max(start+1,end,a); } }
int main() {
    int m,n;
    scanf("%d %d\n",&m,&n);
    int a[m];
    for(i=0;i<m;i++)
    scanf("%d ",a[i]);
    max(0,n-1,a);
    for(i=0;i<n;i++)
    printf("%d",a[i]);
    return 0; }