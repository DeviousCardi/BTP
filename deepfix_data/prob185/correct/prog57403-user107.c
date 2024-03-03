#include <stdio.h>
int max(int start,int end,int a[])
{int i,h;
if(start==end)
return 0;
else {
for(i=start;i<end;i++)
{h=a[start];
    if(a[i]>h)
    h=a[i]; }
return max(start+1,end,a); } }
int main() {
    int m,n,i;
    scanf("%d %d\n",&m,&n);
    int a[m];
    for(i=0;i<m;i++)
    scanf("%d ",&a[i]);
    max(0,n-1,a);
    for(i=0;i<n;i++)
    printf("%d",a[i]);
    return 0; }