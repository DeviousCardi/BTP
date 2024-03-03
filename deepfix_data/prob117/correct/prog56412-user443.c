#include <stdio.h>
#include <stdlib.h>
int rec(int n)
{   if(n=0)
    return 1;
    if(n==1)
    return 2;
    else
    return 2*rec(n-1); }
int main() {
	int n,k,p,i,a=0;
	scanf("%d\n",&n);
	printf("%d",rec(1));
	for(p=0;p<n;p++) {
    scanf("%d\n",&k);
   for(i=1;i<23;i++) {
       if(k==(rec(i)-1)) {
           a=1;
           break; } }
       if(a==1)
       printf("yes");
       else
       printf("no");
       printf("\n"); }
	return 0; }