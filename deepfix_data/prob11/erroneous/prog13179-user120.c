#include <stdio.h>
int sum=0;
int main()
{   int n,t,p,j=0;
     scanf("%d %d\n",&n,&t);
    int ar[n];
    for(int i=0;i<n;i++) {
        scanf("%d ",ar[i]); }
    p=check(ar,0);
    if(p==t)
      printf("YES");
      else
      printf("NO");
    return 0; }
int sum(int b[],int i) {
   if(b[i]!=0) {
       return b[i]+prod(b,++i); }