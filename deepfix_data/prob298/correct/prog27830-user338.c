#include <stdio.h>
#include <stdlib.h>
int main() {
int cat(int n) {
    if(n==0)
    return 1;
    else
    return((cat(n-1)*2*(2*n-1))/(n+1)); }
int t,x,k,i,flag=0;
scanf("%d\n",&t);
for(i=0;i<t;i++)
{scanf("%d",&k);
 for(x=0;x<17;x++) {
     if(k==cat(x))
     {printf("yes\n");
     flag=1;
     break;}
     else continue; }
    if(flag==0)
    printf("no\n"); }
	return 0; }