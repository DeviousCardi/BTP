#include<stdio.h>
#include<strings.h>
int recurse(int *a,int n){
    if(n>0)
{    printf("%d ",*(a+n-1));
    return recurse(a,n-1); }
else
return 0; }
int main() {
    int n;
    scanf("%d\n",&n);
    int a[n];
for(int i=0;i<n;i++)
scanf("%d",a+i);
recurse(a,n);
    return 0; }