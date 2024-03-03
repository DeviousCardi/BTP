#include <stdio.h>
int m;
int max(int start,int end,int a[])
{int i,h;
for(i=start;i<end;i++)
{h=a[start];
    if(a[i]>=h)
    h=a[i]; }
return i; }
void swap(int n,int m,int a[]) {
    int temp;
    temp=a[m];
    a[m]=a[n];
    a[n]=temp;
    return ; }
int sort(int start,int end,int a[]) {
if(start==end)
return 0;
else {
int r=max(start,end,a);
swap (r, end,a);
return sort(start,end-1,a); } }
int main() {
    int m,i;
    scanf("%d\n",&m);
    int a[m];
    for(i=0;i<m;i++)
    scanf("%d ",&a[i]);
    sort(0,m-1,a);
    for(i=0;i<m;i++)
    printf("%d ",a[i]);
    return 0; }