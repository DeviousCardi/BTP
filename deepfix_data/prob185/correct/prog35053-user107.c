#include <stdio.h>
int sort(int start,int end,int a[])
{int i,h;
if(start==end)
return 0;
else {
max(start,end,a);
swap (max, a[end]);
return sort(start,end-1,a); } }
int max(int start,int end,int a[])
{int i,h;
for(i=start;i<end;i++)
{h=a[start];
    if(a[i]>h)
    h=a[i]; }
return h; }
int swap(int n,int m) {
    int temp;
    temp=m;
    m=n;
    n=temp;
    return m; }
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