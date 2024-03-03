#include<stdio.h>
int main() {
   int sumdigit(int x);
   int n,sum;
   int i,a[1000]
 scanf("%d",&n);
 for(i=0;i<n;i++)
 scanf("%d",&a[i])
   sum=sumdigit(a[i]);
   printf (" %d\n", sum);
   return 0; }
int sumdigit(int a[]) {
  int s=0,d;
  if(x==0) return (0);
  d= a[i]%10;
  s+=d+sumdigit(x/10);
  return(s); }