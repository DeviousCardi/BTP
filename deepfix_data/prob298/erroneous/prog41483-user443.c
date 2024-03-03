#include <stdio.h>
#include <stdlib.h>
int ctln(int n)
{  int ans=0,i;
    if(n==0)
    return 1;
    for(i=0;i<n;i++) {
        ans=ans+ctln(i)*ctln(n-i-1); }
    return ans; }
int main() {
    int k,a=0,i,n;
    scanf("%d",&n);
    for(j=0;j<n;j++) {
    scanf("%d",&k);
   for(i=0;i<17;i++) {
       if(k==ctln(i));
       a++;
       break; }
   if(a==1)
   printf("yes\n");
   else
   printf("no\n"); }
	return 0; }