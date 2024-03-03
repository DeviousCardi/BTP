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
for (i=20;i>=0;i--) {
    for (j=20;j>=0;j--)
 {    if (b==B(j,i))
         flag1=1;
         n=j;k=i;
         break; } }
if (flag1==1)
printf("%d %d",n,k);
else
printf ("-1");
	return 0; }