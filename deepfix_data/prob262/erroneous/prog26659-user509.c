#include<stdio.h>
#include<strings.h>
void sec(int *a,n)
{ int temp,j;
    if(n==0||n==1) return;
temp=a[0];
a[0]=a[n-1];
a[n-1]=temp;
sec(a+1,n-2); }
int main()
{   int s[10000];
int n;
scanf("%d",&n);
for(int i=0;i<n;i++) {
    scanf("%d",&s[i]); }
sec(s,n);
for(int j=0;j<n;j++) {
    printf("%d ",s[i]); }
    return 0; }