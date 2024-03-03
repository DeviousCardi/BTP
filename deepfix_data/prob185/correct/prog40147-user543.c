#include <stdio.h>
int k=0;
void fun(int i,int *a,int n)
{ if(i==n-1)
return ;
    k=k+*(a+i);
  return fun(i+1,a,n); }
int main()
{ int i,n,l;
scanf("%d %d\n",&n,&l);
int a[n];
for(i=0;i<n;i++)
scanf("%d ",a+i);
fun(0,a,n);
if(k==l)
printf("YES");
else
printf("NO");
    return 0; }