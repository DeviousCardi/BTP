#include <stdio.h>
int main(){
int n,i,count=0;
scanf("%d\n",&n);
int a[n];
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=1;i<n-1;i++)
{if(a[i]>a[i-1]&&a[i]>a[i+1])
   { count++;} }
printf("%d",count);
    return 0; }