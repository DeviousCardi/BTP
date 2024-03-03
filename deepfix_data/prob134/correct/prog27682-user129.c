#include <stdio.h>
#include <stdlib.h>
int B(int n, int k) {
    if (n<k)
  return 0;
    else
    if (n==0&&k==0) return 1;
    else
    if (k==0)return 1;
    else return (B(n-1,k)+B(n-1,k-1)); }
int main() {
int i, j,b,n,k,flag1=0;
scanf ("%d",&b);
for (i=0;i<=20;i++) {
    for (j=1;j<=20;j++)
 {    if (b==B(i,j))
         flag1=1;
         n=i;k=j; } }
if (flag1==1)
printf("%d %d",n,k);
else
printf ("-1");
	return 0; }