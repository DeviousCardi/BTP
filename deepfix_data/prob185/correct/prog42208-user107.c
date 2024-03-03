#include <stdio.h>
int max(int start,int end,int a[])
{int i,h;
for(i=start;i<end;i++)
{h=a[start];
    if(a[i]>h)
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
max(start,end,a);
swap (max, end,a);
return sort(start,end-1,a); } }
int main() {
    int m,n,i;
    scanf("%d %d\n",&m,&n);
    int a[m];
    for(i=0;i<m;i++)
    scanf("%d ",&a[i]);
    sort(0,n-1,a);
    for(i=0;i<m;i++)
    printf("%d ",a[i]);
    return 0; }