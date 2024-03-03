#include <stdio.h>
int i;
int check(int ar[],int n,int j) {
    int a=0;int b=0;
    for(i=0;i<j;i++)
    a=a+ar[i];
    for(i=j;i<n;i++)
    b=b+ar[i];
    if(a==b)
    return 1;
    else if(j==n)
    return 0;
    else
    return check(ar,n,j++); }
int main() {
   int n;
   scanf("%d,",&n);
   int ar[n];
   for(i=0;i<n;i++)
   scanf("%d",&ar[i]);
   if(check(ar,n,1)==1)
   printf("YES");
   else
   printf("NO");
    return 0; }